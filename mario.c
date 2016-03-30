#include <stdio.h>
#include <cs50.h>

int main(void)
{   //h represents the pyramid height
    int height;
    do 
    {   printf("Give me the pyramid height please:");  
        height = GetInt();
    }
    while(height < 0 || height > 23);
    // r is the row number
    
    for (int row = 0; row < height; row++)
    {   
        for (int j = 0; j < height - row - 1; j++)
        {   
            printf(" ");
        }
        
        for (int j = 0; j < row + 2; j++)
        {   
            printf("#");
        }
        
        printf("\n");
    }
}    
    
        
