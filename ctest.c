
#include<stdio.h>
int main(){
    int x=10;
x+=(x++)+(++x)+x;
printf("%d\n",x);

int a=7;
int *y;
y=&a;
printf("%d",*y);
int x1=9;
char  c[10];
x1%2==0?printf("even\n"):printf("odd\n");
int c1=(printf("AA")&&printf("BB"));
printf("%d\n",c1);

return 0;
}
