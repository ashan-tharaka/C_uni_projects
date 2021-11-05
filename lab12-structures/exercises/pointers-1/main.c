#include <stdio.h>

int main() {
    int a,b,*p1,*p2,sum=0;
    printf("Enter num1:");
    scanf("%d",&a);
    printf("Enter num2:");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    sum=*p1+*p2;
    printf("Sum=%d",sum);




    return 0;
}
