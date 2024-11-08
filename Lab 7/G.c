#include <stdio.h>
#include <stdlib.h>

void amplitude_gain_to_db(int dp){
    double gain=0, gain_db=0;
    do{
        printf("Enter your amplitude gain: ");
        scanf("%lf", &gain);

        if(gain < 0){
            printf("Gain should be positive\n");
        }
    }while(gain < 0);

    gain_db = 20.0 * log10(gain);

    printf("Amplitude gain in decibels = ");

    if(dp == 2){
        printf("%.2lf", gain_db);
    }else{
        printf("%.6lf", gain_db);
    }

    printf(" dB\n");
}

void db_to_amplitude_gain(int dp){
    double gain=0, gain_db=0;

    printf("Enter your amplitude gain (dB): ");
    scanf("%lf", &gain_db);

    gain = pow(10, (gain_db / 20.0));

    printf("Amplitude gain = ");

    if(dp == 2){
        printf("%.2lf", gain);
    }else{
        printf("%.6lf", gain);
    }
    printf("\n");
}

void power_gain_to_db(int dp){
    double gain=0, gain_db=0;
    do{
        printf("Enter your power gain: ");
        scanf("%lf", &gain);

        if(gain < 0){
            printf("Gain should be positive\n");
        }
    }while(gain < 0);

    gain_db = 10.0 * log10(gain);

    printf("Power gain in decibels = ");

    if(dp == 2){
        printf("%.2lf", gain_db);
    }else{
        printf("%.6lf", gain_db);
    }

    printf(" dB\n");
}

void db_to_power_gain(int dp){
    double gain=0, gain_db=0;

    printf("Enter your power gain (dB): ");
    scanf("%lf", &gain_db);

    gain = pow(10, (gain_db / 10.0));

    printf("Power gain = ");

    if(dp == 2){
        printf("%.2lf", gain);
    }else{
        printf("%.6lf", gain);
    }
    printf("\n");
}

int main(){
    
    int decimalPlaces=0;
    int userMenuInput;

    do{
        printf("Do you wish to display answers in 2 or 6 decimal places? ");
        scanf("%d", &decimalPlaces);
    }while(decimalPlaces != 2 && decimalPlaces != 6);

    do{
        
        printf("Menu\n");
        printf("1 - Convert amplitude gain to decibels\n");
        printf("2 - Convert decibels to amplitude gain\n");
        printf("3 - Convert power gain to decibels\n");
        printf("4 - Convert decibels to power gain\n");

        printf("\nYour Choice: ");
        scanf("%d", &userMenuInput);

        switch(userMenuInput){
            case 1:
                amplitude_gain_to_db(decimalPlaces);
                break;
            case 2:
                db_to_amplitude_gain(decimalPlaces);
                break;
            case 3:
                power_gain_to_db(decimalPlaces);
                break;
            case 4:
                db_to_power_gain(decimalPlaces);
                break;
            case 5:
                printf("Exiting program");
                break;
            default:
                printf("Invalid Menu Choice\n");
                break;
        }

    }while(userMenuInput != 5);

    return 0;
}