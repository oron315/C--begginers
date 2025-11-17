/*------------------------------------------------------
* Filename: [max.c]
* Description: [The program simulates a drinks machine that wants to deliver a secret messege given a specific coin numbers rescived. .]
* Author: [Oron Bar Hillel and Gali Amrani]
-------------------------------------------------------*/

#include <stdio.h>


int main() {
    while(1){
        //Setting variables
        char drink_char = '\0';
        int num_agora = 0;
        int num_half_coin = 0;
        int num_coin = 0;
        int num_two_coin = 0;
        int num_five_coin = 0;
        int num_ten_coin = 0;
        float cost = 0.0f;
        float sum = 0.0f;
        float extra_money = 0.0f;

        //Printing about the program
        printf("*************** Welcome to the drinks machine ***************\n\n\n\n");
        printf("Please select the drink you would like to order:\n");

        printf("press 'C' for Coca-Cola\n");
        printf("press 'D' for Diet-Cola\n");
        printf("press 'O' for Orangeade\n");
        printf("press 'S' for Schweppes\n");
        printf("press 'G' for Grape juice\n");
        printf("press 'W' for Mineral water\n");

        scanf("%c", &drink_char);
        if(drink_char >= 'a'){
            drink_char -= ('a'-'A');
        }

        switch(drink_char ){
            case 'C':
                printf("The price of the drink is 5.20 NIS\n");
                cost = 5.2;
                break;
            case 'D':
                printf("The price of the drink is 7.20 NIS\n");
                cost = 7.2;
                break;

            case 'O':
                printf("The price of the drink is 3.40 NIS\n");
                cost = 3.4;
                break;
            case 'S':
                printf("The price of the drink is 4.50 NIS\n");
                cost = 4.5;
                break;
                
            case 'G':
                printf("The price of the drink is 3.50 NIS\n");
                cost = 3.5;
                break;
            case 'W':
                printf("The price of the drink is 2.50 NIS\n");
                cost = 2.5;
                break;
            case 'E':
                return 0;
            default:
                printf("No such drink, try again!\n\n\n");
                continue;
            
        }

        
        printf("Enter amount of 0.1 NIS: ");
        scanf("%d", &num_agora);
        printf("Enter amount of 0.5 NIS: ");
        scanf("%d", &num_half_coin);
        printf("Enter amount of 1 NIS: ");
        scanf("%d", &num_coin);
        printf("Enter amount of 2 NIS: ");
        scanf("%d", &num_two_coin);
        printf("Enter amount of 5 NIS: ");
        scanf("%d", &num_five_coin);
        printf("Enter amount of 10 NIS: ");
        scanf("%d", &num_ten_coin);

        sum = num_agora * 0.1 + num_half_coin * 0.5 + num_coin +  num_two_coin * 2 + num_five_coin * 5 +num_ten_coin * 10;
        printf("The machine received payment of %.2f NIS\n\n", sum);
        printf("Payment received.\n");

        if( num_agora == 1 && num_two_coin == 3 && num_five_coin == 3 && num_ten_coin == 7){
            printf("Special agent, please respond!!!\n\n");
        }
        
        sum -= cost;
        num_ten_coin = (int)sum / 10;
        sum -=num_ten_coin * 10;

        num_five_coin = (int)sum / 5;
        sum -=num_five_coin * 5;

        num_two_coin = (int)sum / 2;    
        sum -=num_two_coin * 2;

        num_coin = (int)sum;

        sum -=num_coin ;
        num_half_coin = sum / 0.5;

        sum -=num_half_coin * 0.5;

    
        num_agora = sum / 0.1;
        sum -= num_agora * 0.1;
        if(sum > 0.05){
            ++num_agora;
        }

        //Printing 
        printf("Machine returned %d coins of 0.1 NIS\n", num_agora);
        printf("Machine returned %d coins of 0.5 NIS\n", num_half_coin);
        printf("Machine returned %d coins of 1 NIS\n", num_coin);
        printf("Machine returned %d coins of 2 NIS\n", num_two_coin);
        printf("Machine returned %d coins of 5 NIS\n", num_five_coin);
        printf("Machine returned %d coins of 10 NIS\n", num_ten_coin);

        printf("Enjoy your drink!!\n");


    }


}