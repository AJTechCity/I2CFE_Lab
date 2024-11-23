#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int inputs[10], N=0;

    for(int i=0;i<10;i++){
        inputs[i]=0;
    }

    for(int i=0; i<50;i++){
        inputs[rand() % 10]++;
    }

    for(int i=0;i<10;i++){
        printf("%d\n", inputs[i]);
    }

    return 0;
}