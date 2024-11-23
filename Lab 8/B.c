#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int inputs[10], N=0;

    for(int i=0;i<10;i++){
        inputs[i]=0;
    }

    for(int i=0; i<15;i++){
        do{
            printf("Enter an integer N: ");
            scanf("%d", &N);

            if(N < 0 || N > 9){
                printf("N must be between 0 and 9\n");
            }
        }while(N < 0 || N > 9);

        inputs[N]++;
    }

    for(int i=0;i<10;i++){
        printf("%d\n", inputs[i]);
    }

    return 0;
}