#include <stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    //printing address

    printf("%d \n", &age);
    printf("%d \n", ptr);
    printf("%d \n", &ptr);
    printf("%d \n", &_age);

    //or
    
    printf("%p \n", &age);
    printf("%p \n", ptr);
    printf("%p \n", &ptr);
    printf("%p \n", &_age); 

    //u is for unsighned int
    
    printf("%u \n", &age);
    printf("%u \n", ptr);
    printf("%u \n", &ptr);
    printf("%u \n", &_age);

    //printing value

    printf("%d \n", age);
    printf("%d \n", *ptr);
    printf("%d \n", _age);
    printf("%d \n", *(&age));

    return 0;
}