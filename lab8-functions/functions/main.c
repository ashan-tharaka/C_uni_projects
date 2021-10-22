#include <stdio.h>
int add(int x,int y);
void swap(int a,int b);
void swap1(int *a,int *b);

int main() {
    int x,y;
    printf("Enter no1:");
    scanf("%d",&x);
    printf("Enter no2:");
    scanf("%d",&y);
    int a;
    a=add(x,y);//pass by value
    printf("Sum is %d",a);
    int m=10;
    int n=20;
    swap(m,n);
    swap1(&m,&n);//pass by reference




    return 0;
}

int add(int x,int y){
   int ans=x+y;
    return ans;

}

void swap(int a , int b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf(" \nvalues after swap m = %d\n and n = %d", a, b);
}
void swap1(int *a , int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    printf(" \nvalues after swap m = %d\n and n = %d", *a, *b);
}