#include <stdio.h>

int main() {
    printf("Enter the integer:");
    int n,count;
    scanf("%d",&n);
    if(n>1){
        for(int i=2;i<n;i++){
            if(n%i==0){
                count+=1;
            }

        }
        if(count==0){
            printf("It is a prime number\n ");
        }
        else{
            printf("It is not a prime number\n");
        }

    }
    else if(n==1||n==0){
        printf("It is not a prime number\n");
    }
    else{
        printf("Please Enter a integer\n");
    }
    return 0;
}
