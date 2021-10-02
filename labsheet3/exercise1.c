#include<stdio.h>
 int main()
 {   //1
     const float PI=3.14159;
     float Area,circumference,radius;

     printf("Enter radius:");
     scanf("%f",&radius);
     Area=PI*radius*radius;
     printf("Area is %.2f\n",Area);
     circumference = 2*PI*radius;
     printf("circumference is %.2f\n\n",circumference);
     //2
     char  a='A';
     char b='B';
     char c='C';
     printf("The reverse of \'%c'\,\'%c\',\'%c'\ is  \'%c'\,\'%c\',\'%c'\ \n\n",a,b,c,c,b,a);

     //3
     float l1,l2,l3;
     printf("Enter length in cm:");
     scanf("%f",&l1);
     l2=l1/100;
     l3=l1/100000;
     printf("The length is %fm\n",l2);
     printf("The length is %fKm\n\n\n",l3);






 }
