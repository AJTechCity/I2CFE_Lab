#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int userChoice=1, _5p=0, _10p=0, _20p=0, _50p=0, _1pound=0, _2pound=0, _5poundNotes=0;
    float total=0, change=0;

    do{
        
        total = 0;
        _5poundNotes=0;
        change = 0;

        printf("Enter number of 0.05 coins: ");
        scanf("%d", &_5p);
        total += (0.05 * _5p);

        printf("Enter number of 0.10 coins: ");
        scanf("%d", &_10p);
        total += (0.10 * _10p);
        
        printf("Enter number of 0.20 coins: ");
        scanf("%d", &_20p);
        total += (0.20 * _20p);

        printf("Enter number of 0.50 coins: ");
        scanf("%d", &_50p);
        total += (0.5 * _50p);

        printf("Enter number of 1.00 coins: ");
        scanf("%d", &_1pound);
        total += _1pound;

        printf("Enter number of 2.00 coins: ");
        scanf("%d", &_2pound);
        total += (2 * _2pound);

        printf("The total amount of money you entered is: %.2f\n\n", total);
        
        _5poundNotes = total / 5;
        change = total - (_5poundNotes*5);

        printf("You will now receive %d five-pound notes and %.2f change\n\n", _5poundNotes, change);

        printf("Enter 1 to continue or 2 to terminate: ");
        scanf("%d", &userChoice);

    }while(userChoice != 2);

    return 0;
}