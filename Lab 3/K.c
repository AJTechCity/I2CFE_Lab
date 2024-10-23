#include <stdio.h>

int main(){

    int totalHours=0, totalMinutes=0, i, inputHours, inputMinutes;

    for(i=0; i<5;i++){
        printf("Enter a time intervals in hours and minutes\n");
        scanf("%d%d", &inputHours, &inputMinutes);
        totalHours += inputHours;
        totalMinutes += inputMinutes;
        if(totalMinutes >= 60){
            totalHours += totalMinutes/60;
            totalMinutes %= 60;
        }

        printf("%d Hours %d Minutes\n", totalHours, totalMinutes);
    }

    return 0;
}