#include <stdio.h>

int main(void){

    int a,b;

    printf("Enter values for a and b: ");
    scanf("%d%d", &a, &b);

    float c = (float) a / (float) b;

    printf("Result is %f", c);

    return 0;
}