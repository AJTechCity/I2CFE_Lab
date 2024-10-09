#include <stdio.h>

int main(void){
    int a, b;
    int sum;

    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);

    sum = a+b;

    printf("Sum of a and b = %d", sum);

    return 0;
}