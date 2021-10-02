#include<stdio.h>
//My index number is 204155M
const float PI = 3.14;
void main()
{
   //5
   float celcius,farenhite;
   printf("Enter temperature in centigrate:");
   scanf("%f",&celcius);
   farenhite=celcius*9/5+32;
   printf("Temperature  in fahrenhite is %.2fF",farenhite);

 printf("\n");
//6
   float radius;

   printf("Enter a radius of circle:");
   scanf("%f",&radius);
   float area=PI*radius*radius;
   float circumference=2*PI*radius;
   printf("Area of circle is %.2f\n",area);
   printf("Circumference of circle is %.2f\n",circumference);
//7
   float bits;

   printf("Enter number of bits:");
   scanf("%f",&bits);
   float bytes=bits/8;
   float kilobytes=bytes/1024;
   printf("Bytes :%f\n",bytes);
   printf("KiloBytes :%f\n",kilobytes);


}

