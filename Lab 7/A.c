#include <stdio.h>

int sum_to_n(int N){
    int i, sum=0;

    for(i=0; i<=N; i++){
        sum += i;
    }

    return sum;
}

int main(){
    int x, result;
    scanf("%d", &x);

    result = sum_to_n(x);
    printf("The sum of i to %d is %d\n", x, result);

    return 0;
}