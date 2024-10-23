#include <stdio.h>

int main(){

    int i;

    for(i=1;i<=150;i++){
        if(i % 2 != 0 && i%3 != 0 && i%5 != 0 && i%7!=0 && i%11!=0 && i%13!=0){
            printf("%d\n", i);
        }
    }

    return 0;
}