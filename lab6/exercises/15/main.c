#include <stdio.h>

int main() {
    for(int i=1;i<=6;i++){
        printf("%d.",i);
        for(int j=6;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
