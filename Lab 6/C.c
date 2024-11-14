#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i;
    int x[10];

    for(i=0;i<=9;i++){
        printf("Enter a value for x[%d]: ", i);
        scanf("%d", &x[i]);
        printf("Setting x[%d] = %d\n", i, x[i]);
    }

    for(i=9;i>=0;i--){
        printf("x[%d] = %d\n", i, x[i]);
    }

    return 0;
}