#include <stdio.h>

int main() {
    int i,j;
    printf("Enter the integer:");
    scanf("%d",&i);
    if(i==0){
        printf("%d\n",0);
    }else if (i>0){
        while (i>0){
            j=i%10;
            printf("%d",j);


            i=i/10;

        }
    }
    else{
        printf("Invalid input\n");
    }

    return 0;
}
