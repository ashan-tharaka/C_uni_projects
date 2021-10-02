#include<stdio.h>

int main()
{
    //11
    float data_usage;
    int days;
    printf("Enter total data usage in GB:");
    scanf("%f",&data_usage);
    printf("Enter number of days  those mobile data were used:");
    scanf("%d",&days);
    float ave=data_usage/days;
    printf("Average data usage is %.3fGB",ave);
    //12






    return 0;

}
