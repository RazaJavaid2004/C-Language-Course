#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void MainMenu();
void selection(int choice1);
float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);
int modulo(int a, int b);
float radians(float degrees);
float cosec(float rad);
float sec(float rad);
float cot(float rad);

int main() {
    int choice1;

    MainMenu();
    printf("Enter Your Choice: ");
    scanf("%d", &choice1);
    selection(choice1);

    return 0;
}

void MainMenu() {
    printf("---------------Main Menu-------------- \n");
    printf("1. Arithmetic Operations \n");
    printf("2. Trigonometric Operations \n");
    printf("3. Trigonometric Inverse Operations \n");
}

void selection(int choice1) {
    int choice2;
    float a, b;
    float degrees;

    while(1) {
        switch(choice1) {
        case 1:
        printf("----Arithmetic Operations--- \n");
        printf("1. Addition \n");
        printf("2. Subtraction \n");
        printf("3. Multiplication \n");
        printf("4. Division \n");
        printf("5. Modulo \n");
        printf("6. Back to Main Menu \n");
        printf("7. Exit \n");
        
        printf("Enter Your Choice: ");
        scanf("%d", &choice2);

        if(choice2 == 6) MainMenu();

        if(choice2 == 7) {
            printf("Calculator Exited its Servers \n");
            return;
        }

        printf("Enter Two Numbers: \n");
        scanf("%f %f", &a, &b);

        switch(choice2) {
            case 1:
            printf("Sum is: %f \n", addition(a, b));
            break;
            case 2:
            printf("Difference is: %f \n", subtraction(a, b));
            break;
            case 3:
            printf("Product is: %f \n", multiplication(a, b));
            break;
            case 4:
            if(b == 0) printf("Error! Result is Infinty \n");
            else printf("Quotient is: %f \n", division(a, b));
            break;
            case 5:
            if(b == 0) printf("Error! Result is Infinty \n");
            else printf("Remainder is: %d \n", modulo((int)a, (int)b));
            break;
            default:
            printf("Invalid Choice! \nTry Again \n");
        }
        break;
        case 2:
        printf("1. Sine \n");
        printf("2. Cosine \n");
        printf("3. Tangent \n");
        printf("4. Cosecant \n");
        printf("5. Secant \n");
        printf("6. Cotangent \n");
        printf("7. Back To Main Menu \n");
        printf("8. Exit \n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice2);

        if(choice2 == 7) MainMenu();

        if(choice2 == 8) {
            printf("Calculator Exited its Servers \n");
            return;
        }

        printf("Enter Angle in degrees: ");
        scanf("%f", &degrees);

        float rad = radians(degrees);

        switch(choice2) {
            case 1:
            printf("Sine value is: %f \n", sin(rad));
            break;
            case 2:
            printf("Cosine value is: %f \n", cos(rad));
            break;
            case 3:
            printf("Tangent value is: %f \n", tan(rad));
            break;
            case 4:
            printf("Cosecant value is: %f \n", cosec(rad));
            break;
            case 5:
            printf("Secant value is: %f \n", sec(rad));
            break;
            case 6:
            printf("Tangent value is: %f \n", cot(rad));
            break;
            default:
            printf("Invalid Choice! \nTry Again \n");

        }
        break;
        default:
        printf("Invalid Choice! \nTry Again \n");
        }
    }
}

float addition(float a, float b) {
    return a + b;
}

float subtraction(float a, float b) {
    return a - b;
}

float multiplication(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    return a / b;
}

int modulo(int a, int b) {
    return a % b;
}

float radians(float degrees) {
    float rad = (degrees * M_PI) / 180;
    return rad;
}

float cosec(float rad) {
    if(sin(rad) == 0) {
        printf("Error! Cosecant is undefined for this angle \n");
        return -1;
    }
    return 1 / sin(rad);
}

float sec(float rad) {
    if(cos(rad) == 0) {
        printf("Error! Secant is undefined for this angle \n");
        return -1;
    }
    return 1 / cos(rad);
}

float cot(float rad) {
    if(tan(rad) == 0) {
        printf("Error! Cotanget is undefined for this angle \n");
        return -1;
    }
    return 1 / tan(rad);
}