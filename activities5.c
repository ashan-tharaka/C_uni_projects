#include<stdio.h>
#include<math.h>


int main()
{
    //15
    int x1,y1,x2,y2;
    printf("Enter 1st coordinate's x value:");
    scanf("%d",&x1);
    printf("Enter 1st coordinate's y value:");
    scanf("%d",&y1);
    printf("Enter 2nd coordinate's x value:");
    scanf("%d",&x2);
    printf("Enter 2nd coordinate's y value:");
    scanf("%d",&y2);

    float distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("Distance is %.2f\n\n",distance);
    //16
    int x=12;
    int y=10;
    int z;
    z=x;
    y=z;
    x=y;
    printf("y is %d\n",y);
    printf("x is %d\n",x);


}
