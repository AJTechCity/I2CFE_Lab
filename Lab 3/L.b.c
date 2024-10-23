#include <stdio.h>
#include <math.h>

int main(){

    double x=5, totalArea=0, endX=10;
    int N;

    printf("Enter a value for N: ");
    scanf("%d", &N);

    double width = (endX-x) / N;

    for(x=x; x<=endX; x+=width){
        double area = (pow((x+width), -1) + pow(x, -1)) * (width/2);
        totalArea += area;
    }

    printf("Total Area is %lf", totalArea);

    return 0;
}