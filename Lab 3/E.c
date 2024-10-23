#include <stdio.h>
#include<math.h>

int main(){

    double x, y, sum=0;

    for(x = -9.9;x<=-8.8;x+=0.005){
        y = exp(x);
        sum+= y;
    }

    printf("Sum is %f\n", sum);

    return 0;
}