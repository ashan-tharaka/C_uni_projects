#include <stdio.h>

int main() {
    printf("Enter the number of rows:");
    int r;
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        for(int j=r-1;j>=i;j--){
            printf("\t");
        }
        int p=1;
        for(int k=1;k<=i;k++){


            printf("%d\t",p);
            p*=2;
        }
        p=p/2;
        for(int k=r-1;k>=1;k--){
            p/=2;
            if(p==0){

            }
            else{
                printf("%d\t",p);
            }


        }
        for(int j=r-1;j>=i;j--){
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
