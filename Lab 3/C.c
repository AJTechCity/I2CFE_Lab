#include <stdio.h>

int main(){

    int a,i;

    printf("Enter a value of a to count up to: ");
    scanf("%d", &a);

    for(i = 1; i<=a; i++){
        printf("Hello - line %d\n", i);
    }

    for(i=a; i<=(a*2);i+=2){
        printf("Hello - line %d\n", i);
    }

    return 0;
}