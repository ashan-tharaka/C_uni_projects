#include <stdio.h>

int main() {
    printf("Enter the number x:");
    float x,sum=0;
    scanf("%f",&x);
    for(int i=0;i<=10;i+=2){

            int f=1;

            for(int j=1;j<=i;j++){
                f*=j;
                x*=x;
            }
            if(i%4==0){
                sum+=(float )x/f;

            }
            else{
                sum-=(float)x/f;
            }


    }
    printf("Sum=%.3f",sum);

    return 0;
}
