#include <stdio.h>

int main(){

    int userInput;

    do{
        printf("Enter an integer: ");
        scanf("%d", &userInput);

        printf("User entered: %d\n", userInput);
    }while(userInput <= 1000);

    return 0;
}