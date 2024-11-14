#include <stdio.h>
#include <stdlib.h>

int main(){

    int i=0, length=0;

    char string[20];

    for(i=0; i<20;i++){
        string[i]='\0';
    }

    printf("Enter a string: ");
    scanf("%s", string);

    printf("Hello: %s\n", string);

    for(i=0; i<20;i++){
        if(string[i] != '\0'){
            length++;
        }
    }

    printf("The string %s contains %d characters", string, length);

    return 0;
}