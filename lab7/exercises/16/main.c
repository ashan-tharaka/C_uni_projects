#include <stdio.h>

int main() {
    printf("Enter a number:");
    int n,i=1;
    scanf("%d",&n);
    int pow=n;
    while (i<=1){
        pow*=pow;
        i++;
    }
    printf("Power of %d is %d",n,pow);



    return 0;
}
