#include<stdio.h>
//My index number is 204155M
int physics;
int chemistry;
int maths;

void main()
{
//1
 char a='A';
 char b='B';
 char c='C';
 printf("The reverse of %c,%c,%c is %c,%c,%c",a,b,c,c,b,a);

printf("\n");
 //2
 int x;
 int y;
 int z;
 float r;
 x=10;
 y=20;
 z=x+y;
  r=70.0/3.0;
  printf("x=%d\n",x);
  printf("y=%d\n",y);
  printf("z=%d\n",z);
  printf("r=%f\n",r);

//3
 printf("Physics:");
 scanf("%d",&physics);
 printf("Chemistry:");
 scanf("%d",&chemistry);
 printf("maths:");
 scanf("%d",&maths);
 int total=maths+physics+chemistry;
 float average=total/3.0;
 printf("Total is %d\n",total);
 printf("Average is %.2f",average);


 printf("\n");
//4
float total_data;
int days;
printf("Enter Total data usage(GB):");
scanf("%f",&total_data);
printf("Enter number of days those mobile data was used:");
scanf("%d",&days);
float average1=total_data/days;
printf("average usage is %.3fGB",average1);



}

