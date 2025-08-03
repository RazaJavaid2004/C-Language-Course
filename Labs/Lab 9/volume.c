/*
Write the program that calculate the volume by using following formula 
𝑉 = 𝑎 2 ∗ 1 /3 ℎ,
by creating two separate functions. One of the functions with prototype “getData(int h, int a)”, 
takes two inputs from user. The other function with prototype “volumeCal( )” calculates the 
volume, and this function must be called from the first function “getData ( )”. The first function 
must be called from the main function.
*/

#include <stdio.h>

void getData(int *h, int *a);
double volumeCal(int h, int a);

int main() {
    int height, base;
    getData(&height, &base);
    return 0;
}

void getData(int *h, int *a) {
    printf("Enter the height of the pyramid: ");
    scanf("%d", h);
    printf("Enter the base length of the pyramid: ");
    scanf("%d", a);
    
    double volume = volumeCal(*h, *a);
    printf("The volume of the pyramid is: %.2f\n", volume);
}
double volumeCal(int h, int a) {
    return (a * a * h) / 3.0;