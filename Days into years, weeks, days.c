#include <stdio.h>

void main()
{
    int days, weeks, years, input, temp1, temp2;
    printf("Please enter a number- ");
    scanf("%d \n", &input);
    years=input/365;
    temp1=input%365;
    weeks=temp1/7;
    temp2=weeks%7;
    days=temp2;
    printf("No. of years are- %d    No. of weeks- %d    No. of days- %d", years, weeks, days);
}