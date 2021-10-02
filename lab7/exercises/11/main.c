#include <stdio.h>

int main() {
    int i,j,sum=0;
    printf("Enter the integer:");
    scanf("%d",&i);
    int k=i;
    if(i==0){
        printf("%d is an Armstrong number\n",0);
    }

    else if(i>0){
        while (k>0){
            j=k%10;
            sum+=(j*j*j);



            k=k/10;

        }
        if(i==sum){
            printf("%d is an Armstrong number\n",i);

        }
        else{
            printf("%d is not an Armstrong number\n",i);
        }

    }
    else{
        printf("Invalid\n");

    }

        return 0;
}
