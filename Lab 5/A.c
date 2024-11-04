#include <stdio.h>
#include <math.h>

int main(){

    double t_obj, t_room, t_oven, q, time;

    printf("Enter a value for Temperature of the room : ");
    scanf("%lf", &t_room);

    printf("Enter a value for Temperature of the oven : ");
    scanf("%lf", &t_oven);

    printf("Enter a value for the cooling constant for the object: ");
    scanf("%lf", &q);

    printf("Enter a value for time elapsed since being removed from the oven : ");
    scanf("%lf", &time);

    if(time < 0 || q < 0 || t_room > t_oven){
        printf("Error: Time and cooling constant must be positive and temperature of the room must be less than that of the oven");
    }else{
        t_obj = t_room + ((t_oven - t_room) * exp(-1 * q * time));

        printf("The temperature of the object should be: %lf", t_obj);
    }

    return 0;
}