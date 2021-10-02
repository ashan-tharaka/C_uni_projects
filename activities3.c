#include<stdio.h>
#include<math.h>


int main()
{
    //12
    int a,b,c;

    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    printf("Enter c:");
    scanf("%d",&c);
    float x=(-b+sqrt(b*b-4*a*c))/(2*a);
    printf("Root of equation:%.2f",x);



    return 0;

}
