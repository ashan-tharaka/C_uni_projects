#include <stdio.h>

int main() {
    //a
    int x=1,sum=0;
    while (x<=10){
        sum+=x;
        x++;
    }
    printf("Sum is %d\n",sum);
    //b
    int x1=1,sum1=1;
    while (x1<=10){
        sum1*=x1;
        x1++;
    }
    printf("Multiplication is %d\n",sum1);

    //c
    int count=0;
    int y=1;
    while (y<=100){
        if(y%2==0){
            count++;
        }

        y++;
    }
    printf("Count is %d\n",count);
    //d
    int count1=0;
    int y1=1;
    while (y1<=100){
        if(y1%2==1){
            count1++;
        }

        y1++;
    }
    printf("Count is %d\n",count1);
    return 0;
}
