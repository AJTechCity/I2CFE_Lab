#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(void){

    double v;

    printf("Enter the volume of a sphere: ");
    scanf("%lf", &v);

    double radius = pow((3*v)/(4*PI), (float) 1/ (float) 3);

    printf("The radius of the given sphere is: %f", radius);

    return 0;
}