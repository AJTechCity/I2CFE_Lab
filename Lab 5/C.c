#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int roll=0, dice1=0, dice2=0, _4Total=0, _11Total=0, lessThan6Total=0, diceTotal=0;

    for(roll=0; roll<100; roll++){
        dice1 = rand() % 7;
        dice2 = rand() % 7;

        diceTotal = dice1 + dice2;

        printf("%d %d\n", dice1, dice2);

        if(diceTotal == 4){
            _4Total++;
        }else if(diceTotal == 11){
            _11Total++;
        }

        if(diceTotal < 6){
            lessThan6Total++;
        }
    }

    printf("Number of times total of 4 was thrown = %d\n", _4Total);
    printf("Number of times total of 11 was thrown = %d\n", _11Total);
    printf("Number of times total of less than 6 was thrown = %d\n", lessThan6Total);

    return 0;
}