#include <stdio.h>

int main() {
    int x=2;
    int sum=0;
    while (x<=50){
        sum+=x;
        x+=2;
    }
    printf("Sum is %d\n",sum);
    return 0;
}
