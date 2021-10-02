#include<stdio.h>


int main(){
//1
printf("Name            :ashan tharaka\n");
printf("University Name :Moratuwa\n");
printf("Index Number    :204155M\n");
//2
printf("Enter two values:\n");
int a,b;
scanf("%d",&a);
scanf("%d",&b);
printf("Value-1 :%d\nValue-1 :%d\n",a,b);
//3
float num1,num2,num3,S;
float A;
printf("Enter 3 numbers:\n");
scanf("%f",&num1);
scanf("%f",&num2);
scanf("%f",&num3);
S=num1+num2+num3;
A=S/3;
printf("Sum=%.2f\nAverage=%.3f\n",S,A);
//4
int side;
printf("Enter the side value:\n");
scanf("%d",&side);
int area=side*side;
printf("Area is %d\n",area);




return 0;
}
