#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void display_array(double []);

int main(){

    double x[314];

    for(int i=0; i<314;i++){
        x[i] = (i/100.0);
    }

    display_array(x);

    return 0;
}

void display_array(double x[]){
    for(int i=0;i<20;i++){
        printf("%f\n", x[i]);
    }
}