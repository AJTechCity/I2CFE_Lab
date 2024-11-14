#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i;
    int x[10];

    for(i=0;i<=9;i++){
        x[i] = i*10;
        printf("Setting x[%d] = %d\n", i, x[i]);
    }

    return 0;
}