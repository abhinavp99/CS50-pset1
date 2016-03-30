#include <stdio.h>
#include <cs50.h>

int main(void)
{   //h represents the pyramid height
    int h;
    do 
    {   printf("Give me the pyramid height please:");  
        h = GetInt();
    }
    while(h < 0 || h > 23);
    // n is the row number
    for (int n = 0; n < h; n++)
    {   for (; h - n > 1; n++)
        {   printf(".");
        }
    }
        
}
