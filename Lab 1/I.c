#include <stdio.h>

int main(void){
    double a, b, c, x1, x2;

    printf("Enter a, b, and c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    
    x1 = (-b+sqrt(pow(b, 2) - (4*a*c)))/(2*a);
    x2 = (-b+sqrt(pow(b, 2) + (4*a*c)))/(2*a);

    print("x1: %d\nx2: %d\n", x1, x2);

    return 0;
}