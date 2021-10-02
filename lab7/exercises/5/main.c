#include <stdio.h>

int main() {
   int sum,count;
    while (count-16<=99){
        if((count-16)%2==1){
            sum+=(count-16);
        }
        count++;

    }
    printf("Sum is %d\n",sum);


    return 0;
}
