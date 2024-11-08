#include <stdio.h>

void letterCount(char string[]){
    int count=0;

    for(int i=0; i<20;i++){
        if((string[i] >= 'A' && string[i] <= 'C') || (string[i] >= 'a' && string[i] <= 'c')){
            count++;
        }
    }

    printf("Count is %d", count);
}

int main(){
    
    char string[20];

    printf("Enter string: ");
    scanf("%s", string);

    letterCount(string);

    return 0;
}