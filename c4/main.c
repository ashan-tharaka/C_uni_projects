#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;

    printf("Enter a two digit number:");
    scanf("%d",&n);
    int x1=n/10;
    int x2=n%10;
    printf("Sum of digits of number is %d",x1+x2);

    return 0;
}
