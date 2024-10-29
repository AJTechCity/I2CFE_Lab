#include <stdio.h>
#include <math.h>

int main(){

    int a=0;
    double x=1, y, difference;

    printf("Enter a value for a: ");
    scanf("%d", &a);

    do{
        y = 0.5 * (x + (a/x));
        difference = fabs(x-y);
        printf("x has value: %f\n", x);
        x = y;
    }while(difference > 0.00001);

    printf("Square root is: %f", x);

    return 0;
}