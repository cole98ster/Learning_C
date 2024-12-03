#include <stdio.h>

int main(void) {
    //printing the main topic that the program can run
    printf("What would you like us to help you with today?\n");
    printf("A. What are your hours?\n");
    printf("B. How long will it take my flowers to be ready?\n");
    printf("C. How much will my order cost?\n");
    //scan to see what the user has picked
    char Option;
    scanf("%c", &Option);
    //using my mandatory switch to split the code into the section of what the user picked
    switch (Option) {
        case 'A':
            //printing the hours of the flower shop
            printf("The flower shop is open Monday-Friday 10-7, and Saturday-Sunday 10-4");
            break;
        case 'B':
            //asking how many flowers want to be ordered
            printf("How many flowers would you like to order?\n");
            //Saving the amount the user has picked
            int FlowerAmountB;
            scanf("%d", &FlowerAmountB);
            //printing the amount of business days the order will take depending on how many flowers were chosen
            if (FlowerAmountB <= 5){
                printf("Your order will take 1 business days");
            }
            else if (FlowerAmountB <= 10 && FlowerAmountB >= 6){
                printf("Your order will take 3 business days");
            }
            else if (FlowerAmountB <= 20 && FlowerAmountB >= 11){
                printf("Your order will take 5 business days");
            }
            else if (FlowerAmountB > 20){
                printf("Your order will take 10 business days");
            }
            else{
                //this is a safety if a character or invalid number is chosen
                printf("Invalid Choice");
            }
            break;
        case 'C':
            //asking how many flowers want to be ordered
            printf("How many flowers would you like to order?\n");
            //Saving the amount the user has picked
            int FlowerAmountC, FlowerCost;
            scanf("%d", &FlowerAmountC);
            if (FlowerAmountC <= 5){
                //calculating and printing the cost of the Flowers when purchasing less and equal to 5
                FlowerCost = FlowerAmountC * 4;
                printf("Your order will cost $%d", FlowerCost);
            }
            else if (FlowerAmountC <= 10 && FlowerAmountC >= 6){
                //calculating and printing the cost of the Flowers when purchasing 6 to 10
                FlowerCost = 20 + ( (FlowerAmountC - 5 ) * 3);
                printf("Your order will cost $%d", FlowerCost);
            }
            else if (FlowerAmountC <= 20 && FlowerAmountC >= 11){
                //calculating and printing the cost of the Flowers when purchasing 11 to 20
                FlowerCost = 20 + 15 + ( (FlowerAmountC - 10 ) * 2);
                printf("Your order will cost $%d", FlowerCost);
            }
            else if (FlowerAmountC > 20){
                //calculating and printing the cost of the Flowers when purchasing more than 20
                FlowerCost = 20 + 15 + 20 + ( (FlowerAmountC - 20 ) * 1);
                printf("Your order will cost $%d", FlowerCost);
            }
            else{
                //this is a safety if a character or invalid number is chosen
                printf("Invalid Choice");
            }
            break;
        default:
            //this is in case the user has not chosen A,B ,or C
            printf("That is not a valid question\n");
    }
}