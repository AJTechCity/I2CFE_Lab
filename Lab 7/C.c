#include <stdio.h>

double mean(double a, double b, double c){
    double mean = (a+b+c) / 3.0;

    return mean;
}

int main(){
    
    double a, b, c;

    printf("Enter values for a, b, and c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    double abcMean = mean(a, b, c);

    printf("The mean is %lf", abcMean);

    return 0;
}