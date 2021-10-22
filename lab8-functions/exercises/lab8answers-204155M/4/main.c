#include <stdio.h>
int  fact(int);

int main() {
    int n;

    printf("Enter a Number:");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n, fact(n));

    return 0;
}


int fact(int n){
    int fact=1;
    for (int i = 1; i <=n ; ++i) {
        fact*=i;
    }
    return fact;
}