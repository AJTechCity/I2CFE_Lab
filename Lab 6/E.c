#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i=0;
    
    double A[5];
    double B[5];
    double dotProduct=0;

    for(i=0;i<5;i++){
        printf("Enter a value for A[%d]: ", i);
        scanf("%lf", &A[i]);
        printf("Setting A[%d] = %d\n", i, A[i]);
    }

    for(i=0;i<5;i++){
        printf("Enter a value for B[%d]: ", i);
        scanf("%lf", &B[i]);

        dotProduct += A[i] * B[i]; //Gradually calc dot product during B's input to stop another for leep needing to be created

        printf("Setting B[%d] = %f\n", i, B[i]);
    }




    printf("Dot product is: %f", dotProduct);

    return 0;
}