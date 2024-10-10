#include <stdio.h>

int main(void){

    double x;

    printf("Enter a value for x: ");
    scanf("%lf", &x);

    double outcome = (x*x*x) + 3*(x*x) + 5*x + 7;

    printf("Outcome is: %f", outcome);

    return 0;
}