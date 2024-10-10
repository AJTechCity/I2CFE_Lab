#include <stdio.h>

int main(void) {

  float price1, price2, price3, price4;
  int quant1, quant2, quant3, quant4;

  printf("Enter 4 prices and four quantities:\n");
  scanf("%f%d%f%d%f%d%f%d", &price1, &quant1, &price2, &quant2, &price3, &quant3, &price4, &quant4);

  float total = (price1 * quant1) + (price2 * quant2) + (price3 * quant3) + (price4 * quant4);

  printf("Total is %.2f\n", total);

  float paid, change;
  printf("Enter how much you are paying: ");
  scanf("%f", &paid);

  change = paid - total;

  printf("\nChange is %.2f", change);

  return 0;
}