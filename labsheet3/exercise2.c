#include<stdio.h>
 int main()
 {   //4
     float a1,a2,a3;
     printf("Enter first angle value:");
     scanf("%f",&a1);
     printf("Enter second angle value:");
     scanf("%f",&a2);
     a3=180-(a1+a2);
     printf("Third angle value is %.3f\n\n",a3);
     //5
     float cen,far;
     printf("enter temperature in centigrade:");
     scanf("%f",&cen);
     far=9*cen/5+32;
     printf("Temperature is %.3fF",far);





     return 0;

 }
