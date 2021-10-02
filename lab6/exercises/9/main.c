#include <stdio.h>

int main() {
    float e=0;

    for(float i=1;i<=5;i++){
        float f=1;
        for(float j=1;j<=i;j++){
            f*=j;

        }

        e+=(float)1/f;


    }
    printf("e=%f",e);
    return 0;
}
