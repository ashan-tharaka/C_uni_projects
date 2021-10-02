#include <stdio.h>

int main() {
    int n;
    printf("Enter the positive number:");
    scanf("%d",&n);
    int fact=1;
    if(n>0){

        for(int i=1;i<=n;i++){
            fact*=i;
        }
        printf("Factorial of %d is %d\n",n,fact);
    }
    else{
        printf("it is not a positive number\n");
    }
    return 0;
}
