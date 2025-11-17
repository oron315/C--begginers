/*------------------------------------------------------
* Filename: [calc_age.c]
* Description: [This program recives a current and birth date, and calculates the age in days, months, and years.]
* Author: [Oron Bar Hillel]
-------------------------------------------------------*/

#include <stdio.h>

#define DAYS_IN_YEAR (365)
#define DAYS_IN_MONTH (30)
#define MONTHS_IN_YEAR (12)

int main() {

    //Setting the variables for the current date
    int current_year = 0;
    int current_month = 0;
    int current_day = 0;
    //Setting the variables for the birth date
    int birth_year = 0;
    int birth_month = 0;
    int birth_day = 0;

    //Setting the output variables requested.
    int number_days_old = 0;
    float number_months_old = 0;
    float number_years_old = 0;
    

    //Instructions about the program
    printf("This program claculates the age of a person given his date of birth and the current date.\n");
    printf("Enter the current date in a dd/mm/yyyy format:\n");
    scanf("%d/%d/%d", &current_day, &current_month, &current_year);
    
    printf("Enter your birth date in a dd/mm/yyyy format:\n");
    scanf("%d/%d/%d", &birth_day, &birth_month, &birth_year);

    //Checking if there is a need to consider that not another full year came around.
    if(current_month >= birth_month){
        number_days_old = 365 * (current_year - birth_year) + 30 * (current_month - birth_month) +(current_day - birth_day);
    }else{
        number_days_old = 365 * (current_year - birth_year - 1) + 30 * (MONTHS_IN_YEAR -(birth_month - current_month)) +(current_day - birth_day);
    }
    //Printing all the results
    printf("Gary's age in days: %d\n", number_days_old);

    number_months_old = (float)number_days_old / 30;
    printf("Gary's age in days: %f\n", number_months_old);

    number_years_old = (float)number_days_old / 365;
     printf("Gary's age in days: %f\n", number_years_old);

    return 0;
}