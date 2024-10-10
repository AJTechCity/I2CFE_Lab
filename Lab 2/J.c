#include <stdio.h>

int main(void){

    int start_hours, start_minutes, end_hours, end_minutes;

    printf("Enter start time in the format HH:MM\n");
    scanf("%d:%d", &start_hours, &start_minutes);

    printf("Enter end time in the format HH:MM\n");
    scanf("%d:%d", &end_hours, &end_minutes);

    int start_time_minutes = (start_hours * 60) + start_minutes;
    int end_time_minutes = (end_hours * 60) + end_minutes;

    int duration_minutes = end_time_minutes - start_time_minutes;

    int duration_hours = duration_minutes / 60;

    printf("The duration is %d minutes which is %dh %dm", duration_minutes, duration_hours, (duration_minutes%60));

    return 0;
}