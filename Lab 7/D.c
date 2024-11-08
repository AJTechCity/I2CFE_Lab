#include <stdio.h>

void read_values(double array[]){
    for(int i=0; i<5; i++){
        printf("Enter value %d: ", (i+1));
        scanf("%lf", &array[i]);
    }
}

void print_values(double array[]){
    for(int i=0;i<5;i++){
        printf("%lf\n", array[i]);
    }
}

int main(){

    double X[5];
    read_values(X);
    print_values(X);

    return 0;
}