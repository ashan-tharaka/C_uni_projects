#include <stdio.h>

int main() {
   //a
   for(int i=1;i<=5;i++){
       for(int j=1;j<=i;j++){
           printf("%d  ",i);
       }
       printf("\n");

   }
   //b
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("*  ");
        }
        printf("\n");

    }
    //c
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");

    }
    //d
    for(int i=1;i<=5;i++){
        for(int j=4;j>=i;j--){

            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){

            printf("*");
        }
        for(int j=4;j>=i;j--){

            printf(" ");
        }
        printf("\n");

    }

    return 0;
}
