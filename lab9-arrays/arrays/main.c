#include <stdio.h>

int main() {
    int x=7;
    int y[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter value for block %d:",i);
        scanf("%d",&y[i]);


    }
    for (int i = 0; i < 5; ++i) {
        printf("value of block %d is %d\n",i,y[i]);

    }


    return 0;
}
