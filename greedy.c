#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{   
    // This gets the amount of change from the user
   float change;
    do 
    {   printf("How much change is owed?");  
        change = GetFloat();
    }
    while(change < 0);
    
    // converts the the change into a whole number of cents
    float change_two = change * 100;
    float change_three = round(change_two);
    int cents = (int) change_three;
    
    // declares variables with values of coins
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int number_of_coins = 0;
        
    // the actual calculation
    while (cents >= quarter)
    {   number_of_coins++;
        cents = cents - quarter;
    }
    while (cents >= dime)
    {   number_of_coins++;
        cents = cents - dime;
    }
    while (cents >= nickel)
    {   number_of_coins++;
        cents = cents - nickel;
    }
    while (cents >= penny)
    {   number_of_coins++;
        cents = cents - penny;
    }
    printf("%d\n", number_of_coins);
    
}
