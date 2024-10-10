#include <stdio.h>

int main(void){

    float a,b;

    printf("Enter values for a and b: ");
    scanf("%f%f", &a, &b);

    float c = a/b;

    printf("Result is %f", c);

    return 0;
}