#include <stdio.h>

int main(void){
    int a, b, c, product;

    printf("Enter a, b, and c: ");
    scanf("%d%d%d", &a, &b, &c);

    product = a * b * c;

    printf("The product is: %d", product);

    return 0;
}