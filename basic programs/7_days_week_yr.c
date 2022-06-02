#include <stdio.h>

int main()
{
    int days;
    int yr,week,day;
    printf("Enter days: ");
    scanf("%d",&days);
    yr = days/365;
    week = (days - yr*365)/7;
    day = (days- yr*365 - week*7);
    printf("Years: %d\n",yr);
    printf("Week: %d\n",week);
    printf("Days: %d",day);
    return 0;
}