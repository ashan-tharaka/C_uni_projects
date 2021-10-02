#include<stdio.h>
int main(){
 unsigned char x=967;
 int y=~x;
 printf("%d\n",x);
 printf("%d\n",y);
 //right shift
 char a=-60;
 char b=a<<1;
 printf("%d\n",a);
 printf("%d\n",b);

 char c=11;
 char d=12;
 printf("%d\n",c&d);
 printf("%d\n",c^d);
 printf("%d\n",sizeof(x));
 int v=100;
 printf("%d\n",sizeof(v));
 printf("address of v-%d\n",&v);
 int *k=&v;
 printf("%d\n",k);
 int x1=8;
 (x1>19)?printf("HI\n"):printf("Bye\n");

 int a = 0xFFFF;// 0x means value FFFF is in hexadecimal. Binary value is
//1111111111111111
char b = 0xAA;// 0x means value AA is in hexadecimal. Binary value is
//10101010
unsigned char c = 0xAA;// 0x means value AA is in hexadecimal. Binary value is
//10101010
int d;
printf("a in hexadecimal= %X, a in decimal= %d\n", a, a );
printf("b in hexadecimal= %X, b in decimal= %d\n", b, b );
printf("c in hexadecimal= %X, c in decimal= %d\n", c, c );
printf("a & b in hexadecimal= %X, a & b in decimal= %d\n", (a & b), (a & b) );
printf("a & c in hexadecimal= %X, a & c in decimal= %d\n", (a & c), (a & c) );






 return 0;

}
