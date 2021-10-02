#include <stdio.h>
#include <stdlib.h>

int main()

{   int i=1;
    do{
    int hours;


    printf("Enter the number of hours of employee%d worked:",i);
    scanf("%d",&hours);
    if(hours>40){
        int overhours=hours-40;
        int overpay=overhours*500;
        printf("your Overtime pay is Rs.%d.00\n",overpay);

    }
    else{
        printf("No overtime pay for you\n");
    }


     i++;
     }
     while(i<=10);

    return 0;
}
