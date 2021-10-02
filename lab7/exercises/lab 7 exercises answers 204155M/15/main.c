#include <stdio.h>

int main() {
    printf("Enter a number:");
    int n,count=0;
    scanf("%d",&n);
    if(n!=0){
        while (n!=0){

            n/=10;
            count++;

        }
        printf("Number of digits is %d\n",count);
    }
   else{
        printf("Invalid\n");
   }
    return 0;
}
