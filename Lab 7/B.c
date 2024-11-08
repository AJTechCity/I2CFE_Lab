#include <stdio.h>

void mean(double a, double b, double c){
    double mean = (a+b+c) / 3.0;

    printf("The mean is %lf", mean);
}

int main(){
    
    double a, b, c;

    printf("Enter values for a, b, and c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    mean(a, b, c);

    return 0;
}