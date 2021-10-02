#include<stdio.h>
#include<math.h>


int main()
{
//16
    int x,y,z;

    printf("Enter  value x:");
    scanf("%d",&x);
    printf("Enter  value y:");
    scanf("%d",&y);



    x=x+y;
    y=x-y;
    x=x-y;
    printf("x is %d\n",x);
    printf("y is %d\n",y);


    return 0;

}
