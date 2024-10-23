#include <stdio.h>

int main(){

    int i,j, x;

    for(i = 10; i<=19; i+=3){
        for(j=0;j<9;j++){
            x = i + (j*5);
            printf("%d ", x);
        }
        printf("\n");
    }
        
    return 0;
}