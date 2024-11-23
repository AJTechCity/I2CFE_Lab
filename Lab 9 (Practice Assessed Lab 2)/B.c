#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void generate_checksum_digit(char[12]);

int main(){

    char ISBN_input[14], ISBN_clean[12];
    int dash_count=0; //Used to help fill the ISBN_clean variable later on with a single for-loop

    printf("Enter your ISBN: ");
    scanf("%s", ISBN_input);

    for(int i=0; i<14; i++){ //Begin by generating CLEAN ISBN Variable
        if(ISBN_input[i] == '-'){
            dash_count ++;
        }else{
            ISBN_clean[i-dash_count] = ISBN_input[i];
        }
    }

    //First three characters should 978 or 979
    if(ISBN_clean[0] == '9' && ISBN_clean[1] == '7' && (ISBN_clean[2] == '8' || ISBN_clean[2] == '9')){ //Is valid start
        generate_checksum_digit(ISBN_clean);
    }else{
        printf("Invalid ISBN. Must begin with '978' or '979'\n");
    }

    return 0;
}

void generate_checksum_digit(char cleanISBN[12]){
    int total=0, odd_subtotal=0, checksum_digit=0;

    for(int i=0; i<12;i++){
        int value = cleanISBN[i] - '0'; //Convert CHAR value to a valid INTEGER by subtracting the char value of 0 (the starting integer)
        if(i%2 == 0){//For even indexes
            total += value;
        }else{
            odd_subtotal += value;
        }
    }

    total += 3 * odd_subtotal;

    checksum_digit = (10 - (total % 10)) % 10;

    printf("Total = %d \t\t Checksum = %d\n", total, checksum_digit);
}