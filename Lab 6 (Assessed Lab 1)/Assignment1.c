#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LITRESINGALLONS(litres) (litres / 4.54609)
#define MPG(distanceMiles, fuelLitres) (distanceMiles / LITRESINGALLONS(fuelLitres))

int main(){

    float vehicle_1_distance_town = 0.0, vehicle_1_distance_openroad=0.0; //Vehicle 1 Distance Info
    float vehicle_1_fuel_town=0.0, vehicle_1_fuel_openroad=0.0; //Vehicle 1 Fuel Info
    float vehicle_2_distance_town = 0.0, vehicle_2_distance_openroad=0.0; //Vehicle 2 Info
    float vehicle_2_fuel_town=0.0, vehicle_2_fuel_openroad=0.0; //Vehicle 2 Fuel Info
    float vehicle_3_distance_town = 0.0, vehicle_3_distance_openroad=0.0; //Vehicle 3 Info
    float vehicle_3_fuel_town=0.0, vehicle_3_fuel_openroad=0.0; //Vehicle 3 Fuel Info

    float vehicle_1_total_distance=0, vehicle_2_total_distance=0, vehicle_3_total_distance=0;
    float vehicle_1_total_fuel=0, vehicle_2_total_fuel=0, vehicle_3_total_fuel=0;

    int INP_vehicle=0; //Input vehicle number
    int INP_distance=0, INP_fuel=0, INP_triptype=0, trip_count=0; //Gets current trip input data

    do{
        printf("What vehicle do you want to enter data for (1,2, or 3): ");
        scanf("%d", &INP_vehicle);

        if(INP_vehicle <= 3 && INP_vehicle >= 1 && INP_vehicle != -1){ //Retrive the fuel and distance values of the trip
            trip_count++;
            do{
                printf("Enter the trip type (1 for town, 2 for open road): ");
                scanf("%d", &INP_triptype);
                if(INP_triptype != 1 && INP_triptype != 2){
                    printf("Invalid option. Please try again\n");
                }
            }while(INP_triptype != 1 && INP_triptype != 2);

            do{
                printf("Enter the trip distance (miles): ");
                scanf("%d", &INP_distance);
                if(INP_distance <= 0){
                    printf("Distance must be a positive value\n");
                }
            }while(INP_distance <= 0);

            do{
                printf("Enter the total fuel used (in litres): ");
                scanf("%d", &INP_fuel);
                if(INP_fuel <= 0){
                    printf("Fuel used must be a positive value\n");
                }
            }while(INP_fuel <= 0);
        }

        switch(INP_vehicle){
            case 1:
                if(INP_triptype == 1){
                    vehicle_1_distance_town += INP_distance;
                    vehicle_1_fuel_town += INP_fuel;
                }else{
                    vehicle_1_distance_openroad += INP_distance;
                    vehicle_1_fuel_openroad += INP_fuel;
                }
                break;
            case 2:
                if(INP_triptype == 1){
                    vehicle_2_distance_town += INP_distance;
                    vehicle_2_fuel_town += INP_fuel;
                }else{
                    vehicle_2_distance_openroad += INP_distance;
                    vehicle_2_fuel_openroad += INP_fuel;
                }
                break;
            case 3:
                if(INP_triptype == 1){
                    vehicle_3_distance_town += INP_distance;
                    vehicle_3_fuel_town += INP_fuel;
                }else{
                    vehicle_3_distance_openroad += INP_distance;
                    vehicle_3_fuel_openroad += INP_fuel;
                }
                break;
            case -1:
                break;
            default:
                printf("Invalid Vehicle option. Please try again\n");
                break;
        }
    }while(INP_vehicle != -1);

    vehicle_1_total_distance = vehicle_1_distance_openroad + vehicle_1_distance_town;
    vehicle_1_total_fuel = vehicle_1_fuel_openroad + vehicle_1_fuel_town;
    vehicle_2_total_distance = vehicle_2_distance_openroad + vehicle_2_distance_town;
    vehicle_2_total_fuel = vehicle_2_fuel_openroad + vehicle_2_fuel_town;
    vehicle_3_total_distance = vehicle_3_distance_openroad + vehicle_3_distance_town;
    vehicle_3_total_fuel = vehicle_3_fuel_openroad + vehicle_3_fuel_town;

    printf("Data was entered for %d trips\n\n", trip_count);

    printf("Vehicle\t\tTown Distance\tOpen Road Distance\tTotal Distance\tTown MPG\tOpen Road MPG\tCombined MPG\n");
    printf("Vehicle 1\t%.0f miles\t\t%.0f miles\t\t%.0f miles\t\t%.2f mpg\t\t%.2f mpg\t\t%.2f mpg\n",
        vehicle_1_distance_town,
        vehicle_1_distance_openroad,
        vehicle_1_total_distance,
        MPG(vehicle_1_distance_town, vehicle_1_fuel_town),
        MPG(vehicle_1_distance_openroad, vehicle_1_fuel_openroad),
        MPG(vehicle_1_total_distance, vehicle_1_total_fuel)
    );
    printf("Vehicle 1\t%.0f miles\t\t%.0f miles\t\t%.0f miles\t\t%.2f mpg\t\t%.2f mpg\t\t%.2f mpg\n",
        vehicle_2_distance_town,
        vehicle_2_distance_openroad,
        vehicle_2_total_distance,
        MPG(vehicle_2_distance_town, vehicle_2_fuel_town),
        MPG(vehicle_2_distance_openroad, vehicle_2_fuel_openroad),
        MPG(vehicle_2_total_distance, vehicle_2_total_fuel)
    );
    printf("Vehicle 1\t%.0f miles\t\t%.0f miles\t\t%.0f miles\t\t%.2f mpg\t\t%.2f mpg\t\t%.2f mpg\n",
        vehicle_3_distance_town,
        vehicle_3_distance_openroad,
        vehicle_3_total_distance,
        MPG(vehicle_3_distance_town, vehicle_3_fuel_town),
        MPG(vehicle_3_distance_openroad, vehicle_3_fuel_openroad),
        MPG(vehicle_3_total_distance, vehicle_3_total_fuel)
    );

    return 0;
}