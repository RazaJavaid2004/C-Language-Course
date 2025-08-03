/*The `windows.h` header file is used in Windows-based applications to include various functions and macros provided by the Windows API. These functions can be used for GUI applications, system services, and more. Here's an example program that demonstrates a simple Windows application using the `windows.h` library to create a window.
*/
#include <windows.h>

// Function prototypes
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

// WinMain: The entry point for a graphical Windows-based application
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // The name of the window class
    const char CLASS_NAME[] = "Sample Window Class";

    // Register the window class
    WNDCLASS wc = {0};

    wc.lpfnWndProc   = WindowProc;
    wc.hInstance     = hInstance;
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

    // Create the window
    HWND hwnd = CreateWindowEx(
        0,                              // Optional window styles
        CLASS_NAME,                     // Window class
        "Learn Windows API!",           // Window text
        WS_OVERLAPPEDWINDOW,            // Window style

        // Size and position
        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,

        NULL,       // Parent window    
        NULL,       // Menu
        hInstance,  // Instance handle
        NULL        // Additional application data
    );

    if (hwnd == NULL) {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);

    // Run the message loop
    MSG msg = {0};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

// The window procedure function
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;

        case WM_PAINT: {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);

            // All painting occurs here, between BeginPaint and EndPaint
            FillRect(hdc, &ps.rcPaint, (HBRUSH) (COLOR_WINDOW + 1));

            EndPaint(hwnd, &ps);
        }
        return 0;

        case WM_CLOSE:
            if (MessageBox(hwnd, "Really quit?", "My application", MB_OKCANCEL) == IDOK) {
                DestroyWindow(hwnd);
            }
            // Else: User canceled. Do nothing.
            return 0;
    }

    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}
/*
1. **Include `windows.h`**:
   - This header file includes the Windows API functions, macros, and types.

2. **Function Prototypes**:
   - `LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)`: The window procedure function prototype.

3. **WinMain**:
   - This is the entry point for a graphical Windows-based application.
   - `HINSTANCE hInstance`: Handle to the current instance of the application.
   - `HINSTANCE hPrevInstance`: Always NULL in Win32.
   - `LPSTR lpCmdLine`: The command line for the application, excluding the program name.
   - `int nCmdShow`: Controls how the window is shown.

4. **Register Window Class**:
   - Define and register the window class with `WNDCLASS`.

5. **Create Window**:
   - Use `CreateWindowEx` to create the main application window.

6. **Show Window**:
   - Use `ShowWindow` to display the window.

7. **Message Loop**:
   - The message loop retrieves and dispatches messages to the window procedure.

8. **Window Procedure**:
   - Handles messages sent to the window. For example:
     - `WM_DESTROY`: Cleanup when the window is destroyed.
     - `WM_PAINT`: Paint the client area of the window.
     - `WM_CLOSE`: Prompt the user before closing the window.

### Running the Program:
- To compile and run this program, you will need a Windows development environment with a C compiler that supports the Windows API, such as Visual Studio.
*/