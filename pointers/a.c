#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dice = 0,i;
    for(i=0;i<5;i++)
    {
        dice = rand() % 6 +1 ;
        printf("Dice showed: %d\n",dice);
    }
}