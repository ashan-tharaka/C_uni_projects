
#include<stdio.h>
int main(){
int x=10,b;
//1
b = x++;
printf("%d\n",b);
printf("%d\n",x);

b = ++x;
printf("%d\n",b);
printf("%d\n",x);
//2
printf("%d\n", 5 + 3 * 8 / 2 + 2);
//3

int i = 3;
printf("%d\n", (++i)++);
return 0;

}
