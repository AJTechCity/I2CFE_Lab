#include <stdio.h>

int main(){

    int userInput=0;

    while(userInput <= 1000){
        printf("Enter an integer: ");
        scanf("%d", &userInput);

        printf("User entered: %d\n", userInput);
    }

    return 0;
}