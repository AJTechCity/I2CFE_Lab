#include <stdio.h>

int main(){

    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    if(input%3 == 0){
        printf("Number is divisble by 3");
    }else{
        printf("Number is not divisible by 3");
    }
    
    return 0;
}