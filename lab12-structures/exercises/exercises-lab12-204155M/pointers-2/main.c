#include <stdio.h>

int main() {
    int a,b,*p1,*p2,pro=1;
    printf("Enter num1:");
    scanf("%d",&a);
    printf("Enter num2:");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    pro=*p1**p2;
    printf("Product=%d",pro);
    return 0;
}
