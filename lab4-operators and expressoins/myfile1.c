#include<stdio.h>
int main(){
printf("Hello world\n");
 /*int x = 12, y = 13;
 printf("x = %d\n", x);
 printf("y = %d\n\n", y);
 printf("x > y : %d\n", x > y);
 printf("x >= y : %d\n", x >= y);
 printf("x < y : %d\n", x < y);
 printf("x <= y : %d\n", x <= y);
 printf("x == y : %d\n", x == y);
 printf("x != y : %d\n", x != y);
 int a=2;
 printf("Output:%d\n",(a ==2) || (a == 3) || (a == 4));
*/
 int num =10;
 printf("%d\n",(num==10 || num>=5));
 printf("%d\n",(num>=5 && num<=50));
 printf("%d\n",(num!=10 || num>=5));
 printf("%d\n",(num>=20 && num!=10));
  printf("%d\n",++num);
  printf("%d\n",num++);

int a1=8, b=2, x=8, y=2;
int m1,m2,n1,n2,c,d;
m1=a1+(++b);
printf("%d\n",m1);
n1=x+(y++);
printf("%d\n",n1);
m2 =a1-(++b);

printf("%d\n",m2);
n2 = x-(y++);
printf("%d\n",n2);

m1=a1 + (++b);
m2 = a1-(++b);
n2 = x-(y++);
c = m1/m2;
d = m1%m2;
printf("%d\n",c);
printf("%d\n",d);


}
