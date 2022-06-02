#include <stdio.h>
#include <stdlib.h>

int check_ladder(int points)
{
    if(points == 8)
    {
        printf("Ladder");
        return 26;
    }
    else if(points == 21)
    {
        printf("Ladder");
        return 82;
    }
    else if(points == 43)
    {
        printf("Ladder");
        return 77;
    }
    else if(points == 50)
    {
        printf("Ladder");
        return 91;
    }
    else if(points == 54)
    {
        printf("Ladder");
        return 93;
    }
    else if(points == 62)
    {
        printf("Ladder");
        return 96;
    }
    else if(points == 66)
    {
        printf("Ladder");
        return 87;
    }
    else if(points == 80)
    {
        printf("Ladder");
        return 100;
    }
    else
    {
        return points;
    }
}

int check_snake(int points)
{
    if(points == 44)
    {
        printf("Snake");
        return 22;
    }
    else if(points == 46)
    {
        printf("Snake");
        return 5;
    }
    else if(points == 48)
    {
        printf("Snake");
        return 9;
    }
    else if(points == 52)
    {
        printf("Snake");
        return 11;
    }
    else if(points == 55)
    {
        printf("Snake");
        return 7;
    }
    else if(points == 59)
    {
        printf("Snake");
        return 17;
    }
    else if(points == 64)
    {
        printf("Snake");
        return 36;
    }
    else if(points == 69)
    {
        printf("Snake");
        return 33;
    }
    else if(points == 73)
    {
        printf("Snake");
        return 1;
    }
    else if(points == 83)
    {
        printf("Snake");
        return 19;
    }
    else if(points == 92)
    {
        printf("Snake");
        return 51;
    }
    else if(points == 95)
    {
        printf("Snake");
        return 24;
    }
    else if(points == 98)
    {
        printf("Snake");
        return 28;
    }
    else
    {
        return points;
    }    
}

int reached_end(int points)
{
    int end = 100;
    if(points == end)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int play()
{
    int p1=0,p2=0,c,dice;
    int turn = 0;
    while(1)
    {
        if(turn%2==0)
        {
            printf("Player 1 turn\n");
            printf("Press 1 to continue and 0 to quit: ");
            scanf("%d",&c);
            if(c==0)
            {
                printf("Player 1 scored : %d\n",p1);
                printf("Player 2 scored : %d\n",p2);
                printf("Thanks for Playing");
                break;
            }
            dice = rand() % 6 + 1;
            printf("Dice showed: %d",dice);
            p1 += dice;
            p1 = check_ladder(p1);
            p1 = check_snake(p1);

            if(reached_end(p1))
            {
                printf("Player 1 won");
                break;
            }
            else if(reached_end(p2))
            {
                printf("Player 2 won");
                break;
            }
            else
            {
                turn += 1;
            }
        }
    }
}


int main()
{
    int end = 100;
    play();
}