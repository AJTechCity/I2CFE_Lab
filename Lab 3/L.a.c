#include <stdio.h>
#include <math.h>

int main(){

    double x=1, totalArea, endX=8, width;
    int N;

    printf("Enter a value for N: ");
    scanf("%d", &N);

    width = (endX-x) / N;

    for(x=x; x<=endX; x+=width){
        double area = (pow((x+width), 3) + pow(x, 3)) * (width/2);
        totalArea += area;
    }

    printf("Total Area is %lf", totalArea);

    return 0;
}