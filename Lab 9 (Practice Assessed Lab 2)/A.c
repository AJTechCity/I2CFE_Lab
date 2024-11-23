#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double p(double, double);
double f(double, double);
void g(double);

int main(){

    double k=0;

    printf("Enter a value for K: ");
    scanf("%lf", &k);

    g(k);

    return 0;
}

double p(double x, double y){
    return pow(x, 2) - pow(y, 2);
}

double f(double x, double y){
    if(pow(x, 2) > pow(y, 2)){
        return pow(p(x, y), 0.5);
    }else{
        return -1 * pow(-1 * p(x, y), 0.5);
    }
}

void g(double y){
    for(double x=-5.0;x<=5; x+=0.25){
        printf("%f\t\t%f\n", x, f(x, y));
    }
}