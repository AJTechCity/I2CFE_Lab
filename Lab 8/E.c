#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sum_square(int[5], int[5]);

int main(){

    int array1[5] = {1,2,3,4,5}, array2[5] = {4,6,2,1,5};

    sum_square(array1, array2);

    return 0;
}

void sum_square(int a[5], int b[5]){
    for(int i=0; i<5; i++){
        printf("%d\n", a[i] * a[i] + b[i] * b[i]);
    }
}