#include <stdio.h>

int main(){

    int a,i, t=0;

    printf("Enter a value of a to count up to: ");
    scanf("%d", &a);

    for(i = 1; i<=a; i++){
        t+=i;
        printf("Hello - line %d\n", i);
    }

    printf("Value of t is: %d", t);

    return 0;
}