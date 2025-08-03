#include <stdio.h>
#include <string.h>

typedef struct product {
    int id;
    char name[100];
    float price;
    int quantity;
} prod;

float totalprice(prod products[], int size);

int main() {
    prod products[3];

    for(int i = 0; i < 3; i++) {
        printf("Enter Details of Product %d: \n", i + 1);
        printf("Enter Product ID: ");
        scanf("%d", &products[i].id);
        getchar();  
        printf("Enter Product Name: ");
        fgets(products[i].name, sizeof(products[i].name), stdin);
        products[i].name[strcspn(products[i].name, "\n")] = '\0';
        printf("Enter Product Price: ");
        scanf("%f", &products[i].price);
        printf("Enter Product Quantity in Stock: ");
        scanf("%d", &products[i].quantity);
    }

    printf("\nTotal Price of Inventory: %f \n", totalprice(products, 3));

    int highindex = 0;
    for(int i = 0; i < 3; i++) {
        if(products[i].price > products[highindex].price) highindex = i;
    }

    printf("Most Expensive Product: \n");
    printf("Name: %s", products[highindex].name);
    printf("Price: %f", products[highindex].price);

    return 0;
}

float totalprice(prod products[], int size) {
    int totalprice = 0;

    for(int i = 0; i < size; i++) {
        totalprice += products[i].price * products[i].quantity;
    }

    return totalprice;
}