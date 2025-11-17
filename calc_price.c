/*------------------------------------------------------
* Filename: [calc_price.c]
* Description: [This program calculates the price of a package due to its physical parametrs and a price given for each.]
* Author: [Oron Bar Hillel]
-------------------------------------------------------*/

#include <stdio.h>

const float delivery_price = 5.5;
const int price_per_kilo = 11; //[1/kg]
const float price_per_square_cm = 0.03; //[1/cm^2]
const float price_size_compare_to_mass = 0.01; //[cm^2/kg]

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
    size = (float)length * width  / 100; //size in cm^2
    mass_kg = (float)mass_grams / 1000; //mass in kg
    price = delivery_price + price_per_kilo * mass_kg + price_per_square_cm * size + price_size_compare_to_mass *size / mass_kg;

    //Printing
    printf("The size of the package in cm^2:%.2f\n", size);
    printf("The mass of the package in kg:%.3f\n", mass_kg);
    printf("The price of sending the package in Shekels:%.2f\n", price);

    return 0;
}