#include <stdio.h>

int main(void){

    int a, b, c, d;

    printf("Enter 4 numbers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int outcome = (a+b) * (c+d);

    printf("Calculation Outcome: %d", outcome);

    return 0;
}