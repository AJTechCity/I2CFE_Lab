#include <stdio.h>
#include <math.h>
#define PI (3.141592)

int main(void){

    double r;

    printf("Enter a value for the radius of a sphere: ");
    scanf("%lf", &r);

    double volume = ((float) 4/ (float) 3) * PI * pow(r, 3);

    printf("Volume of sphere is: %f", volume);

    return 0;
}