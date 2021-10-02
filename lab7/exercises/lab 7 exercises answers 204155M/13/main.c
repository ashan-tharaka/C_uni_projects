#include <stdio.h>

int main() {
    int a,b,max,k;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    if(a>0 && b>0){
        if(a>=b){
            max=a;

        } else{
            max=b;
        }
        int i=1;
        while (i<=max/2){
            if(a%i==0 && b%i==0){
                k=i;




            }


            i++;
        }
        printf("H.C.F or G.C.D is %d\n",k);
    }
    else{
        printf("Invalid\n");
    }

    return 0;
}
