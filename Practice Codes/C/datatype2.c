#include <stdio.h>
//using the size of operator on the variable of datatype to find the size of it in bytes. 
int main() {
    int Intdatatype;
    float Floatdatatype;
    char Chardatatype;
    double Doubledatatype;

    printf("Size of int datatype is %u \n", sizeof(Intdatatype));
    printf("Size of float datatype is %u \n", sizeof(Floatdatatype));
    printf("Size of character datatype is %u \n", sizeof(Chardatatype));
    printf("Size of double datatype is %u \n", sizeof(Doubledatatype));
    
    return 0;
}