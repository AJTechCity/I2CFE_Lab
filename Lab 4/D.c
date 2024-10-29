#include <stdio.h>

int main(){

    double userInput;
    double product=1;

    do{
        scanf("%lf", &userInput);
        product *= userInput;
        printf("You entered %f", userInput);
        printf("Product is now %f", product);
    }while(product <= 1000);

    printf("The product is greater than 1000, end of program");

    return 0;
}