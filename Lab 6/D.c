#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i=0;
    
    double A[5];
    double B[5];
    double maximums[5];

    for(i=0;i<5;i++){
        printf("Enter a value for A[%d]: ", i);
        scanf("%lf", &A[i]);
        printf("Setting A[%d] = %d\n", i, A[i]);
    }

    for(i=0;i<5;i++){
        printf("Enter a value for B[%d]: ", i);
        scanf("%lf", &B[i]);

        if(B[i] > A[i]){
            maximums[i] = B[i];
        }else{
            maximums[i] = A[i];
        }

        printf("Setting B[%d] = %d\n", i, B[i]);
    }

    for(i=0;i<5;i++){
        printf("%.2f\n", maximums[i]);
    }

    return 0;
}