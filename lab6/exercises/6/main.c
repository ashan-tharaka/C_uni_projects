#include <stdio.h>

int main() {

    float n,sum=0;
    printf("Enter the number n:");
    scanf("%f",&n);
    if(n>=1){
        for(int i=1;i<=n;i++){
            sum+=(float)1/(i*i);

        }
        printf("sum of the series=%.4f\n",sum);

    }
    else{
        printf("Out the range\n");
    }

    return 0;
}
