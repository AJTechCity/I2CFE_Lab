#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void display_array(double []);

int main(){

    double x[314], s[314], c[314];

    for(int i=0; i<314;i++){
        x[i] = (i/100.0);
        s[i] = sin(x[i]);
        c[i] = cos(x[i]);
    }

    display_array(s);
    display_array(c);

    return 0;
}

void display_array(double x[]){
    for(int i=0;i<20;i++){
        printf("%f\n", x[i]);
    }
}