#include <stdio.h>

int main() {
    int a=1,sum=0;
    for(int i=1;i<=10;i++){
        sum+=a;
        a+=4;

    }
    printf("Sum is %d\n",sum);
    return 0;
}
