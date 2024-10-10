#include <stdio.h>

int main(void){

    float p;
    double q;

    printf("Enter a value for p: ");
    scanf("%f", &p);
    printf("Enter a value for q: ");
    scanf("%lf", &q);

    printf("p in decimal format = %f\n", p);
    printf("p in exponential format = %e\n", p);

    printf("q in decimal format = %f\n", q);
    printf("q in exponential format = %e\n", q);

    double calculation = (2*p) + (3*q);

    printf("Calculation result is: %f", calculation);

    return 0;
}