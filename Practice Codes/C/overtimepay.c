#include <stdio.h>

int main() {
    int hours;
    float otpay;

    for(int i=1; i<=10; i++) {
        printf("For Employee No. %d \n", i);
        printf("Enter No. of Hours worked: \n");
        scanf("%d", &hours);

        if(hours > 40) {
            otpay = (hours - 40) * 12;
        }
        else {
            otpay = 0;
        }
        printf("Hours: %d and Overtime Pay: %.2f \n", hours, otpay);
    }
    return 0;
}