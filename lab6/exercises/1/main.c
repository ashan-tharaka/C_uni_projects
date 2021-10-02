#include <stdio.h>
#include <math.h>
int main() {
    for(int i=1;i<=10;i++){
        printf("%d\n",i);


    }
    for(int i=10;i>=1;i--){
        printf("%d\n",i);


    }
    for(int i=1;i<10;i+=2){
        printf("%d\n",i);

    }
    for(int i=1;i<=52;i+=3){
        printf("%d\n",i);

    }
    for(int i=2;i<=33;i=2*i-1){
        printf("%d\n",i);
    }
    for(int i=1;i<=50;i+=2){
        printf("%d ",i);

    }
    printf("\n");
    for(int i=2;i<=50;i+=2){
        printf("%d ",i);

    }
    printf("\n");
    for(int i=1;i<=50;i++){
        if(i%3==0){
            printf("%d ",i);
        }
    }
    return 0;
}
