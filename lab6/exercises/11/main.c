#include <stdio.h>

int main() {
    int pro=1;
    for(int i=1;i<=15;i++){
        if(i%2==1){
            pro*=i;
        }
    }
    printf("Product is %d\n",pro);

    return 0;
}
