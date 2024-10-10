#include <stdio.h>

int main(void){

    int p;

    printf("Enter a value for p: ");
    scanf("%d", &p);

    int remainder = p%7;

    printf("Reaminder is %d", remainder);

    return 0;
}