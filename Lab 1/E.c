#include <stdio.h>

int main(void){
    int w,x,y,z;

    w = 32;
    x = 8;
    y = 10;
    z = 2*y*(w+x);

    printf("2 * %d * (%d + %d) = %d", y, w, x, z);

    return 0;
}