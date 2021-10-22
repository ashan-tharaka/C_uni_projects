#include <stdio.h>
int sumOfSquare(int n1,int n2);
int main() {
    int n1,n2;
    printf("Enter the integer1:");
    scanf("%d",&n1);
    printf("Enter the integer2:");
    scanf("%d",&n2);
    printf("sum of squares of %d and %d =%d",n1,n2, sumOfSquare(n1,n2));
    return 0;
}

int sumOfSquare(int n1,int n2){
    return n1*n1+n2*n2;
}