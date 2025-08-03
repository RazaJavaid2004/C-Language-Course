#include <windows.h>
#include <conio.h>

int main() {
    for(int i = 0;i<5;i++) {
    Beep(750, 300); // Frequency in Hz, duration in milliseconds
    Sleep(300);     // Pause for 300 milliseconds between beeps
    }
    return 0;
}