#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int inputs[10], highest_count=0;

    for(int i=0;i<10;i++){
        inputs[i]=0;
    }

    do{
        inputs[rand() % 10]++;

        for(int i=0; i<10;i++){
            if(highest_count < inputs[i]){
                highest_count = inputs[i];
            }
        }

    }while(highest_count < 50);

    for(int i=0;i<10;i++){
        printf("%d\n", inputs[i]);
    }

    return 0;
}