#include <stdio.h>

int main(){

    double p=0,q=0;

    double output=0;

    do{
        printf("Enter values for p and q: ");
        scanf("%lf%lf", &p, &q);
        if(p>0 && q>0){
            output = pow((p*p) + (q*q), 0.5);
            printf("Output is: %f", output);
        }else{
            printf("Error, p and q must be positive");
        }
    }while(p > 1000 || q > 1000);

    return 0;
}