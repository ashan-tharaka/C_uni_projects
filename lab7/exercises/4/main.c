#include <stdio.h>

int main() {
    int x=1;
   float mul=1;
    while (x<=30){
        mul*=x;
        x+=2;
    }
    printf("Product is %.0f\n",mul);
    return 0;
}
