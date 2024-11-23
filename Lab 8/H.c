#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sum_square(double [314], double [314]);

int main(){

    double x[314], s[314], c[314];

    for(int i=0; i<314;i++){
        x[i] = (i/100.0);
        s[i] = sin(x[i]);
        c[i] = cos(x[i]);
    }

    sum_square(s, c);

    return 0;
}

void sum_square(double a[314], double b[314]){
    for(int i=0; i<314; i++){
        printf("%f\n", pow(a[i], 2) + pow(b[i], 2));
    }
}