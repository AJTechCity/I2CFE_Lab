#include <stdio.h>

int main(void) {

    float change, paid, total;

    total = 0;

    printf("Enter 4 price and 4 quantities: \n");

    for(int i = 0; i<4; i++){
        float price;
        int quantity;

        scanf("%f%d", &price, &quantity);

        total += (price * quantity);
    }

    printf("Total is %.2f\nEnter how much you are paying: ", total);
    scanf("%f", &paid);

    change = paid - total;

    printf("Change is %.2f", change);
    
    return 0;
}