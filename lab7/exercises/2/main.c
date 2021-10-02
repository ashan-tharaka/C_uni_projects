#include <stdio.h>

int main() {
    int x;

    while(x<=20){
        if(x!=0){
            if(x%5==0 ){
                printf("%d\n",x);

            }
            else{
                printf("%d\t",x);
            }

        }


        x++;
    }
    return 0;
}
