#include <stdio.h>
#include <math.h>

int main(void){

    double x;

    printf("Enter a value for x: ");
    scanf("%lf", &x);

    double outcome = pow(x, 3) + 3*pow(x, 2) + 5*x + 7;

    printf("Outcome is: %f", outcome);

    return 0;
}