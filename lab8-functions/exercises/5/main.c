#include <stdio.h>
void Fibo(int);

int main() {
    int n;
    printf("Enter the term number:");
    scanf("%d",&n);


        Fibo(n);
        return 0;
}

void  Fibo(int term){

    int n1=0,n2=1,n3;
    if(term==0){
        printf("Fibonacci series is :");
        printf("0");

    }
    else if(term==1){
        printf("Fibonacci series is :");
        printf("0 1");

    }
    else if(term>1){
        printf("Fibonacci series is :");
        printf("0 1 ");
        for (int i = 2; i <term ; ++i) {
            n3 = n1 + n2;

            printf("%d ", n3);
            n1 = n2;
            n2 = n3;

        }

    }else{
        printf("Invalid term");
    }




}