#include <stdio.h>
#include <stdlib.h>

int main(){

    int i=0, length=0;

    char string1[20], string2[20];

    for(i=0; i<20;i++){
        string1[i]='\0';
        string2[i]='\0';
    }

    printf("Enter string 1: ");
    scanf("%s", string1);

    printf("Enter string 2: ");
    scanf("%s", string2);

    if(strcmp(string1, "count") == 0){
        for(i=0;i<20;i++){
            if(string2[i] != '\0'){
                length++;
            }
        }
        printf("Length of string 2 is %d", length);
    }else if(strcmp(string1, "reverse") == 0){
        for(i=20;i>=0;i--){
            if(string2[i] != '\0'){
                printf("%c", string2[i]);
            }
        }
    }else if(strcmp(string1, "first") == 0){
        printf("%c", string2[0]);
    }else if(strcmp(string1, "last") == 0){
        for(i=0;i<20;i++){
            if(string2[i] != '\0'){
                length++;
            }
        }
        printf("%c", string2[length-1]);
    }else{
        printf("Invalid String 1 command");
    }

    return 0;
}