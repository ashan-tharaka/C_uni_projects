#include<stdio.h>

int main(){


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
printf("%d\n",15&1);


return 0;
}

