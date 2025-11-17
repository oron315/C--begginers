/*------------------------------------------------------
* Filename: [max.c]
* Description: [This program.]
* Author: [Oron Bar Hillel]
-------------------------------------------------------*/

#include <stdio.h>


int main() {
    //Setting variables for input, loops, and flags to help control the conditions requested
    int input_num = 0;
    int i = 0; 
    int j = 0;
    int flag_2 = 0;
    int flag_3 = 0;
    int flag_5 = 0;
  
    //Input from the user + checking if valid input
    printf("Enter an integer positive number:\n");

    scanf("%d", &input_num);
    if(input_num < 0){
        printf("Bad input!\n");
        return 0;
    }

    // The outer loop 
    for(j = 0; j < input_num; ++j){
       
        if(input_num % 2 == 0){
            for(i = 0; i < input_num; ++i){
                printf("*");
                flag_2 = 1;
            }
            
        }
        if(input_num % 3 == 0 && flag_2 == 0){
            for(i = 0; i < input_num; ++i){
                printf("^");
                flag_3 = 1;
            }
                 
        }

        if(input_num % 5 == 0 && flag_2 == 0 && flag_3 == 0){
            for(i = 0; i < input_num; ++i){
                printf("#");
                flag_5 = 1;
            }
            
        }
        if(flag_2 + flag_3 + flag_5 == 0){
            for(i = 0; i < input_num; ++i){
                printf("@");
            }              
        }
        printf("\n");
    }

    return 0;
}