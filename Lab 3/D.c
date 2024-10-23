#include <stdio.h>
#include<math.h>

int main(){

    double x;

    for(x = -9.9;x<=-8.8;x+=0.005){
        printf("%f  %f\n", x, exp(x));
    }

    return 0;
}