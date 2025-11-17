/*------------------------------------------------------
* Filename: [print_chars.c]
* Description: [This program makes a square using symbols according to an input number being divisible by different numbers.]
* Author: [Oron Bar Hillel]
-------------------------------------------------------*/

#include <stdio.h>


int main() {
    //Setting variables for input
    int input_num = 0;
  
    //Input from the user + checking if valid input
    printf("Enter an integer positive number:\n");

    scanf("%d", &input_num);
    if(input_num < 0){
        printf("Bad input!\n");
        return 0;
    }

    // The outer loop making new rows, the inner loop check the conditions each time and prints accordingly.
    for(int j = 0; j < input_num; ++j){
        for(int i = 0; i < input_num; ++i){
            if(input_num % 2 == 0){
                printf("*");
                continue;
            }
            if(input_num % 3 == 0){
                printf("^");
                continue;
            }
            if(input_num % 5 == 0){
                printf("%%");
                continue;
            }
            printf("@");
        }
        printf("\n");
    }

    return 0;
}