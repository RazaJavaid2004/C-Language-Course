/*
To find the greatest common divisor (GCD) of two strings in C,
you can follow a method similar to finding the GCD of numbers.
Here's a brief explanation and a sample code to help you get started:

### Explanation
The idea is to find the largest string that can divide both input strings.
For two strings `str1` and `str2`, a string `x` is a common divisor if:
1. `str1` can be formed by repeating `x` some number of times.
2. `str2` can be formed by repeating `x` some number of times.

To check if a string `x` is a common divisor,
you can concatenate `str1` and `str2` in both possible orders (`str1 + str2` and `str2 + str1`).
If the results are the same, then a common divisor exists.
The length of the common divisor will be the GCD of the lengths of `str1` and `str2`.
*/

#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  

int gcd(int a, int b) {  
    while (b != 0) {  
        int temp = b;  
        b = a % b;  
        a = temp;  
    }  
    return a;  
}  

char* gcdOfStrings(char* str1, char* str2) {  
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int gcdLen = gcd(len1, len2);  
    
    // Create the GCD string (using the substring of the first string)  
    char* gcdString = (char*)malloc((gcdLen + 1) * sizeof(char));  
    if (gcdString == NULL) {  
        return NULL; // Handle memory allocation failure  
    }  
    
    strncpy(gcdString, str1, gcdLen);  
    gcdString[gcdLen] = '\0';   
    
    // Check if str1 and str2 are made of repeated gcdString  
    for (int i = 0; i < len1; i += gcdLen) {  
        if (strncmp(gcdString, str1 + i, gcdLen) != 0) {  
            free(gcdString);  
            return ""; // If they don't match, return an empty string  
        }  
    }  
    
    for (int i = 0; i < len2; i += gcdLen) {  
        if (strncmp(gcdString, str2 + i, gcdLen) != 0) {  
            free(gcdString);  
            return ""; // If they don't match, return an empty string  
        }  
    }  
    
    return gcdString; // Return the GCD string  
}  

// Example usage:  
int main() {  
    char str1[] = "ABABAB";  
    char str2[] = "ABAB";  
    
    char* result = gcdOfStrings(str1, str2);  
    if (result[0] == '\0') {  
        printf("No common GCD string.\n");  
    } else {  
        printf("GCD of strings: %s\n", result);  
    }  
    
    free(result); // Don't forget to free the allocated memory  
    return 0;  
}

/*
Let's walk through this program step by step to understand its logic and functionality:

### Program Components:
1. **Header Files**:
   ```c
   #include <stdio.h>  
   #include <stdlib.h>  
   #include <string.h>
   ```
   These include standard input/output, memory allocation, and string handling functions.

2. **GCD Function**:
   ```c
   int gcd(int a, int b) {  
       while (b != 0) {  
           int temp = b;  
           b = a % b;  
           a = temp;  
       }  
       return a;  
   }  
   ```
   This function calculates the Greatest Common Divisor (GCD) of two integers `a` and `b` using the Euclidean algorithm.

### Dry Run and Explanation:

#### Example Usage:
```c
int main() {  
    char str1[] = "ABABAB";  
    char str2[] = "ABAB";  
    
    char* result = gcdOfStrings(str1, str2);  
    if (result[0] == '\0') {  
        printf("No common GCD string.\n");  
    } else {  
        printf("GCD of strings: %s\n", result);  
    }  
    
    free(result); // Don't forget to free the allocated memory  
    return 0;  
}
```

### Execution Steps:

1. **Main Function**:
   - Initializes `str1` to "ABABAB" and `str2` to "ABAB".
   - Calls `gcdOfStrings(str1, str2)` to find the greatest common divisor (GCD) string.

2. **GCD of Strings Function**:
   ```c
   char* gcdOfStrings(char* str1, char* str2) {  
       int len1 = strlen(str1);
       int len2 = strlen(str2);
       int gcdLen = gcd(len1, len2);  
   ```
   - **Calculate Lengths**: `len1` is 6 and `len2` is 4.
   - **GCD Calculation**: `gcd(6, 4)` returns 2 (GCD of the lengths).

3. **Memory Allocation**:
   ```c
   char* gcdString = (char*)malloc((gcdLen + 1) * sizeof(char));  
   if (gcdString == NULL) {  
       return NULL;  
   }
   strncpy(gcdString, str1, gcdLen);  
   gcdString[gcdLen] = '\0';
   ```
   - **Allocate Memory**: Allocates memory for a string of length `gcdLen + 1` (3 bytes).
   - **Copy Substring**: Copies the first 2 characters of `str1` ("AB") to `gcdString`.

4. **Validation**:
   ```c
   for (int i = 0; i < len1; i += gcdLen) {  
       if (strncmp(gcdString, str1 + i, gcdLen) != 0) {  
           free(gcdString);  
           return "";  
       }  
   }
   for (int i = 0; i < len2; i += gcdLen) {  
       if (strncmp(gcdString, str2 + i, gcdLen) != 0) {  
           free(gcdString);  
           return "";  
       }  
   }
   ```
   - **Check Repetition**: Verifies that both `str1` and `str2` are composed of repeated "AB".
     - For `str1`: "ABABAB" is checked in increments of 2 and all substrings match "AB".
     - For `str2`: "ABAB" is checked in increments of 2 and all substrings match "AB".

5. **Return Result**:
   ```c
   return gcdString;  
   ```
   - Returns `gcdString` ("AB") if both strings are composed of this repeating substring.

6. **Print Result in Main**:
   ```c
   char* result = gcdOfStrings(str1, str2);  
   if (result[0] == '\0') {  
       printf("No common GCD string.\n");  
   } else {  
       printf("GCD of strings: %s\n", result);  
   }  
   free(result);  
   return 0;  
   ```
   - Prints "GCD of strings: AB" and frees the allocated memory.
DRY RUN:
Absolutely! Let's do a dry run of this program to understand how it works step by step. Here’s the program again for reference:

```c
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  

int gcd(int a, int b) {  
    while (b != 0) {  
        int temp = b;  
        b = a % b;  
        a = temp;  
    }  
    return a;  
}  

char* gcdOfStrings(char* str1, char* str2) {  
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int gcdLen = gcd(len1, len2);  
    
    // Create the GCD string (using the substring of the first string)  
    char* gcdString = (char*)malloc((gcdLen + 1) * sizeof(char));  
    if (gcdString == NULL) {  
        return NULL; // Handle memory allocation failure  
    }  
    
    strncpy(gcdString, str1, gcdLen);  
    gcdString[gcdLen] = '\0';   
    
    // Check if str1 and str2 are made of repeated gcdString  
    for (int i = 0; i < len1; i += gcdLen) {  
        if (strncmp(gcdString, str1 + i, gcdLen) != 0) {  
            free(gcdString);  
            return ""; // If they don't match, return an empty string  
        }  
    }  
    
    for (int i = 0; i < len2; i += gcdLen) {  
        if (strncmp(gcdString, str2 + i, gcdLen) != 0) {  
            free(gcdString);  
            return ""; // If they don't match, return an empty string  
        }  
    }  
    
    return gcdString; // Return the GCD string  
}  

// Example usage:  
int main() {  
    char str1[] = "ABABAB";  
    char str2[] = "ABAB";  
    
    char* result = gcdOfStrings(str1, str2);  
    if (result[0] == '\0') {  
        printf("No common GCD string.\n");  
    } else {  
        printf("GCD of strings: %s\n", result);  
    }  
    
    free(result); // Don't forget to free the allocated memory  
    return 0;  
}
```

### Dry Run:

1. **Main Function Execution**:
   - **Initialization**:
     - `str1` is initialized to "ABABAB".
     - `str2` is initialized to "ABAB".

2. **Calling `gcdOfStrings` Function**:
   - `gcdOfStrings("ABABAB", "ABAB")` is called.

3. **Inside `gcdOfStrings` Function**:
   - **Calculate Lengths**:
     - `len1 = strlen("ABABAB")` results in `len1 = 6`.
     - `len2 = strlen("ABAB")` results in `len2 = 4`.
   - **Calculate GCD of Lengths**:
     - `gcd(6, 4)` is called.
     - **Inside `gcd` Function**:
       - Initial values: `a = 6`, `b = 4`.
       - First iteration: `temp = 4`, `b = 6 % 4 = 2`, `a = 4`.
       - Second iteration: `temp = 2`, `b = 4 % 2 = 0`, `a = 2`.
       - Since `b` is now 0, return `a`, which is 2.
     - `gcdLen = gcd(6, 4)` results in `gcdLen = 2`.
   - **Memory Allocation for GCD String**:
     - `gcdString = (char*)malloc((2 + 1) * sizeof(char))` allocates memory for 3 characters.
     - `gcdString` is not NULL, so continue.
   - **Create GCD String**:
     - `strncpy(gcdString, "ABABAB", 2)` copies "AB" to `gcdString`.
     - `gcdString[2] = '\0'` adds null terminator, resulting in `gcdString = "AB"`.
   - **Check Repetition in `str1`**:
     - Loop with `i = 0`, `strncmp("AB", "ABABAB" + 0, 2)` is 0 (matches).
     - Loop with `i = 2`, `strncmp("AB", "ABABAB" + 2, 2)` is 0 (matches).
     - Loop with `i = 4`, `strncmp("AB", "ABABAB" + 4, 2)` is 0 (matches).
   - **Check Repetition in `str2`**:
     - Loop with `i = 0`, `strncmp("AB", "ABAB" + 0, 2)` is 0 (matches).
     - Loop with `i = 2`, `strncmp("AB", "ABAB" + 2, 2)` is 0 (matches).
   - **Return GCD String**:
     - Return `gcdString = "AB"`.

4. **Back to Main Function**:
   - `result` is assigned "AB".
   - **Output Result**:
     - `result[0]` is not '\0', so print "GCD of strings: AB".
   - **Free Allocated Memory**:
     - `free(result)` is called to free the memory allocated for `gcdString`.

### Final Output:
GCD of strings: AB

*/