#include<stdio.h>
#include<math.h>

 int main()
 {   //6
     int num;
     float root;

     printf("Enter a Number:");
     scanf("%d",&num);
     root=sqrt(num);
     printf("Square root of number is %.2f\n\n",root);
     //8
     int distance;
     float spent_fuel,ave;
     printf("Enter the total distance in Km:");
     scanf("%d",&distance);
     printf("Enter the spent fuel in liters:");
     scanf("%f",&spent_fuel);
     ave=distance/spent_fuel;
     printf("Average fuel consumption is %.3fkm/l",ave);




 }
