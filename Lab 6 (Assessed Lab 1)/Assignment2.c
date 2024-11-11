#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));

    int numTable=0, num2, MAX_QUESTIONS=10, operationInt=0, answer=0, correct=0, total=0, userInput=0;
    char operationChar='_';

    for(int i=2; i<MAX_QUESTIONS; i+=2){ //Incrememnts of 2
        numTable = 0; //Reset for each new question set
        
        do{
            printf("Enter a times table between 1 and 12 to be tested on: ");
            scanf("%d", &numTable);
            if(numTable > 12 || numTable <1){
                printf("Invalid Number entered\n");
            }
        }while(numTable > 12 || numTable < 1); //ENsure valid number entered

        for(int j=0; j<i;j++){ //Create questions up to the number i
            operationInt = rand() % 2; //Get random num from 0-1 (inclusive) and then this will correspond to Mutliplication (0) or Division (1)

            switch(operationInt){
                case 0:
                    operationChar='x';
                    //generate num2 between 1 and 12 inclusive
                    num2 = (rand() % 12) + 1; //+1 in case generated num is 0
                    answer = numTable * num2;
                    break;
                case 1:
                    operationChar = '/';
                    num2 = numTable * ((rand() % 12) + 1); //Generate num in range 0-(table * 12)
                    answer = num2 / numTable;
                    break;
            }

            printf("Question %d) What is %d %c %d: ", (j+1), num2, operationChar, numTable);
            scanf("%d", &userInput);

            if(userInput == answer){
                printf("Correct!\n");
                correct++; //Increment total correct question count
            }else{
                printf("Incorrect. The answer was %d\n", answer);
            }

            total++; //Incrememnt total question count
        }
    }

    printf("Quiz over. You answered %d questions and got %d correct.\n", total, correct);
    printf("That gives an accuracy of %d%%", (correct*100)/total);

    return 0;
}