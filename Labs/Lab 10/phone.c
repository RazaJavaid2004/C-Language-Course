#include <stdio.h>

typedef struct {
    int area_code;
    int exchange;
    int number;
} phone;

int main() {
    phone my_phone = {212, 767, 8900};
    phone your_phone;

    printf("Enter Area Code: ");
    scanf("%d", &your_phone.area_code);
    printf("Enter Exchange: ");
    scanf("%d", &your_phone.exchange);
    printf("Enter Number: ");
    scanf("%d", &your_phone.number);

    printf("My number is (%d) %d-%d\n", my_phone.area_code, my_phone.exchange, my_phone.number);
    printf("Your number is (%d) %d-%d\n", your_phone.area_code, your_phone.exchange, your_phone.number);

    return 0;
}