#include<stdio.h>
#include<math.h>
const float PI=3.14;



int main()
{
    //13

  float r,area,circum;
  printf("Enter a radius:");
  scanf("%f",&r);
  area=PI*r*r;
  circum=2*PI*r;
  printf("Area is %.2f\n",area);
  printf("circumference is %.2f\n\n",circum);
  //14
  const float x=2.5,y=7.5;
  x+=1;
  y+=1;
  printf("%.2f\n",x);
  printf("%.2f\n\n",y);



}
