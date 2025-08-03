#include <stdio.h>

int main() {
    float nts_obtained, fsc_obtained, nts_percent, fsc_percent;
    int nts_total, fsc_total, department_code = 0;

    printf("Enter Total Marks of NTS and F.Sc: \n");
    scanf("%d \n%d", &nts_total, &fsc_total);

    printf("Enter Obtained Marks of NTS and F.Sc: \n");
    scanf("%f \n%f", &nts_obtained, &fsc_obtained);

    nts_percent = nts_obtained * 100 / nts_total;
    fsc_percent = fsc_obtained * 100 / fsc_total;

    if(fsc_percent > 70 && nts_percent >= 70) {
        department_code = 1;
    }
    else if(fsc_percent > 70 && nts_percent >= 60) {
        department_code = 2;
    }
    else if(fsc_percent > 70 && nts_percent >= 50) {
        department_code = 3;
    }
    else if(fsc_percent >= 60 && fsc_percent <= 70 && nts_percent >= 50) {
        department_code = 4;
    }
    else if(fsc_percent >= 50 && fsc_percent < 60 && nts_percent >= 50) {
        department_code = 5;
    }
    else if(fsc_percent >= 40 && fsc_percent < 50 && nts_percent >= 50) {
        department_code = 6;
    }
    else printf("Check Your Marks Again \n");

    switch(department_code) {
        case 1:
        printf("You are eligible for Oxford University - IT Department \n");
        break;
        case 2:
        printf("You are eligible for Oxford University - Electronics Department \n");
        break;
        case 3:
        printf("You are eligible for Oxford University - Telecommunication Department \n");
        break;
        case 4:
        printf("You are eligible for MIT University - IT Department \n");
        break;
        case 5:
        printf("You are eligible for MIT University - Chemical Department \n");
        break;
        case 6:
        printf("You are eligible for MIT University - Computer Department \n");
        break;
        default:
        printf("You are Not Eligible for Any Department \n");
    }
    return 0;
}