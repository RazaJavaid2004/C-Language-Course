#include <stdio.h>
/*  %ld or %li is use for long int data type.
    long int also fails to solve this problem.
    Use &lld or %lli for long long int.
    long long int solves this problem.
*/
int main() {
    long long int testInteger3 = 3000000000;
    printf("Number is %lld \n", testInteger3);
    return 0;
}