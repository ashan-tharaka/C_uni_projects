#include <stdio.h>
int multi(int, int);
int main() {
    int n1,n2;
    printf("Enter the integer1:");
    scanf("%d",&n1);
    printf("Enter the integer2:");
    scanf("%d",&n2);
    printf("Multiplication of %d and %d is %d\n",n1,n2,multi(n1,n2));

    return 0;
}

int  multi(int n1,int n2){
    int multi=n1*n2;
    return multi;


}