#include<stdio.h>
#include "myfile.h"

void main(){

    fun();
    fun();
    fun();
    int x=10;
    auto int y=11;
    printf("%d\n",num);



  return 0;


}

void fun()
{
static  int x=10;
x=x+1;
printf("%d\n",x);


}
