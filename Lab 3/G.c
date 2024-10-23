#include <stdio.h>

int main(){

    int input, i;
    
    for(i = 0; i<6;i++){
        printf("Enter a number: ");
        scanf("%d", &input);

        if(input%3 == 0){
            printf("Number is divisble by 3\n");
        }else{
            printf("Number is not divisible by 3\n");
        }
    }
    
    return 0;
}