#include <stdio.h>

int main(void){

    

    printf("Enter 4 prices and four quantities:\n");
    scanf("%f%f%f%f%f%f%f%f", &price1, &quant1, &price2, &quant2, &price3, &quant3, &price4, &quant4);

    float total = (price1 * quant1) + (price2 * quant2) + (price3 * quant3) + (price4 * quant4);

    printf("Total is %f", total);

    float paid, change;
    printf("Enter how much you are paying: ");
    scanf("%f", &paid);

    change = paid - total;

    printf("Change is %f", change);

    return 0;
}