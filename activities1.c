#include<stdio.h>

int main()
{
    //9
    int seconds;

    printf("Enter a time in seconds:");
    scanf("%d",&seconds);
    int hours=seconds/3600;
    int minutes=(seconds%3600)/60;
    int sec=(seconds%3600)%60;
    printf("%d seconds is equivalent to H:M:S - %d: %d: %d\n\n",seconds,hours,minutes,sec);
    //10

    printf("Enter number of days:");

    int days;
    scanf("%d",&days);
    int years=days/365;
    int weeks=(days%365)/7;
    int d=(days%365)%7;
    printf("%d days is equivalent to Y:W:D - %d: %d: %d\n\n",days,years,weeks,d);

    return 0;

}


