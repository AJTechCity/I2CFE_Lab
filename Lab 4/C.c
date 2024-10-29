#include <stdio.h>

int main(){

    double userInput;
    double product=1;

    do{
        scanf("%lf", &userInput);
        product *= userInput;
        printf("You entered %f", userInput);
        printf("Product is now %f", product);
    }while(userInput >= 0);

    printf("You entered a negative number, end of program");

    return 0;
}