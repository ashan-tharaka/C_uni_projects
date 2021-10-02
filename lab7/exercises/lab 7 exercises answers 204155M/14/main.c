#include <stdio.h>

int main() {
    int a,b,min;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    if(a>0 && b>0){
        if(a<=b){
            min=a;
        }
        else{
            min=b;
        }


        while (min<=a*b){
            if(min%b==0 && min%a==0){
                printf("L.C.M is %d\n",min);
                break;

            }
            min+=1;
        }

    }
   else{
        printf("Invalid\n");
   }

    return 0;
}
