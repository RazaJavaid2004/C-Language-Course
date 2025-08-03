/*
Ramanujan number is the smallest number that can be expressed as sum of two cubes in two different ways. Write a program to print all such
numbers up to a reasonable limit.
*/

/*
Ramanujan number, also known as Hardy-Ramanujan number, is 1729. It's the smallest number expressible as the sum of two cubes in two distinct ways: 
1729
=
1
3
+
1
2
3
=
9
3
+
1
0
3
.

Here's a program to find such numbers up to a reasonable limit (say 10000):
*/

#include <stdio.h>

int main() {
    int limit = 10000;

    for (int a = 1; a * a * a < limit; a++) {
        for (int b = a; a * a * a + b * b * b < limit; b++) {
            int sum1 = a * a * a + b * b * b;
            for (int c = a + 1; c * c * c < limit; c++) {
                for (int d = c; c * c * c + d * d * d < limit; d++) {
                    int sum2 = c * c * c + d * d * d;
                    if (sum1 == sum2 && sum1 != 0) {
                        printf("%d can be expressed as %d^3 + %d^3 and %d^3 + %d^3\n", sum1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}

/*
This program finds numbers that can be expressed as the sum
of two cubes in two different ways up to 10000. Adjust the limit as necessary.
*/