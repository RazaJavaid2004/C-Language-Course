#include <stdio.h>

int main() {
    float cost, discount = 0.0, saved_amount, final_amount;
    //shopping cost
    printf("Enter the shopping cost: ");
    scanf("%f", &cost);

    //discount on shopping cost
    if(cost >= 2000 && cost <= 4000) {
        discount = 0.20;
    }
    else if(cost > 4000 && cost <= 6000) {
        discount = 0.30;
    }
    else {
        discount = 0.50;
    }

    //calculate saved_amount and final_amount
    saved_amount = discount * cost;
    final_amount = cost - saved_amount;

    printf("Actual Amount is %f \n", cost);
    printf("Saved Amount is %f \n", saved_amount);
    printf("Final Amount is %f \n", final_amount);

    return 0;
}