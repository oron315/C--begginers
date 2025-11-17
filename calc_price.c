/*------------------------------------------------------
* Filename: [calc_price.c]
* Description: [This program calculates the price of a package due to its physical parametrs and a price given for each.]
* Author: [Oron Bar Hillel]
-------------------------------------------------------*/

#include <stdio.h>

#define DELIVERY_PRICE 5.5
#define PRICE_PER_KILO 11 //[1/kg]
#define PRICE_PER_SQUARE_CM 0.03 //[1/cm^2]
#define PRICE_SIZE_CONPARE_TO_MASS 0.01 //[cm^2/kg]
#define CONVER_CM_TO_MM 10
#define CONVER_KG_TO_G 1000

int main() {
    //Setting the variables
    int length = 0;
    int width = 0;
    int mass_grams = 0;
    float mass_kg = 0.0f;
    float size = 0.0f;
    float price = 0.0f;

    //Taking input from user
    printf("Enter the length, width in milimeter, its mass in grams. In the format of: L,W,M and then enter.\n");
    scanf("%d,%d,%d", &length, &width, &mass_grams);


    //Conversion between the units to the untis given in the price calculations.
    size = (float)length * width  / (CONVER_CM_TO_MM * CONVER_CM_TO_MM); //size in cm^2
    mass_kg = (float)mass_grams / CONVER_KG_TO_G; //mass in kg
    price = DELIVERY_PRICE + PRICE_PER_KILO * mass_kg + PRICE_PER_SQUARE_CM * size + PRICE_SIZE_CONPARE_TO_MASS *size / mass_kg;

    //Printing
    printf("The size of the package in cm^2:%.2f\n", size);
    printf("The mass of the package in kg:%.3f\n", mass_kg);
    printf("The price of sending the package in Shekels:%.2f\n", price);

    return 0;
}