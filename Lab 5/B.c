#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL)); //Used to generate completely random numbers and operators and not get same answers each time

    int num1=0, num2=0, answer=0, userInput=0, correct=0, total=0, operationInt=0;
    char operationChar = '\0';

    do{
        operationInt = rand() % 3; //Get random number from 0-2 (inclusive) and then this will correspond to add (0), subtract (1), and multiply (2)

        do{
            num1 = rand() % 13; //Get random number betwwen 0 and 13 (not inclusive of 13)
        }while(num1 < 1);

        do{
            num2 = rand() % (num1+1); //Get random number between 0 and num1 (inclusive of num1)
        }while(num2 > num1 || num2 < 1);

        switch(operationInt){
            case 0: //addition
                answer = num1+num2;
                operationChar = '+';
                break;
            case 1: //Subtraction
                answer = num1-num2;
                operationChar = '-';
                break;
            case 2: //Multiplication
                answer = num1*num2;
                operationChar = '*';
            default: //Will never reach this
                break;
        }

        printf("What is %d %c %d: ", num1, operationChar, num2);
        scanf("%d", &userInput);

        if(userInput == answer){
            printf("Correct\n");
            correct++;
        }else if(userInput < 0){
            continue;
        }else{
            printf("Wrong - the correct answer is %d\n", answer);
        }

        total++;


    }while(userInput >= 0);

    printf("End of Loop\n");

    printf("You scored %d out of %d correct\n", correct, total);

    return 0;
}