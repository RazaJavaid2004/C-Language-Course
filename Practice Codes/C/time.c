#include <stdio.h>

int main() {
    int hour;

    for(hour =  0; hour <= 24; hour++) {
        if(hour == 0) printf("%d AM Midnight \n", hour + 12);
        else if(hour < 12) printf("%d AM \n", hour);
        else if(hour == 12) printf("%d PM Noon \n", hour);
        else printf("%d PM \n", hour - 12);
    }
    return 0;
}