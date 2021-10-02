#include<stdio.h>
int main(){
    //4
 int i = 12;
 int j = sizeof(i++);
 printf("%d %d\n", i, j);

//5 1
//const char var='A';
//++var;
//printf("%c",var);
int x=10;
x+=(x++)+(++x)+x;
printf("%d\n",x);

unsigned short var='B';
var+=2;
var++;
printf("var : %c , %d ", var,var);

int x1 = 2;
(x1 & 1) ? printf("true\n") : printf("false\n");

//5
 int a = 5, b = 5, c = 10, result;
 result = (a == b) && (c > b);
 printf("(a == b) && (c > b) is %d \n", result);
 result = (a == b) && (c < b);
 printf("(a == b) && (c < b) is %d \n", result);
 result = (a == b) || (c < b);
 printf("(a == b) || (c < b) is %d \n", result);
 result = (a != b) || (c < b);
 printf("(a != b) || (c < b) is %d \n", result);
 result = !(a != b);
 printf("!(a == b) is %d \n", result);
 result = !(a == b);
 printf("!(a == b) is %d \n", result);

 //VI
 printf("Enter a number:");
 int d;

 scanf("%d",&d);
 (d%2==0)?printf("Even\n"):printf("Odd\n");
//VIII
printf("Enter a Year:");
int year;
scanf("%d",&year);
(year%400==0)?printf("Leap year\n"):(year%4==0&&year%100!=0)?printf("Leap Year\n"):printf("Not Leap year\n");
//VII
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
return 0;
}
