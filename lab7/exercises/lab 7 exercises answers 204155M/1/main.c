#include <stdio.h>
#include <math.h>
int main() {
    int n=1;//a
    while (n<=10){
        printf("%d\n",n);
        n++;
    }
    int a=10;//b
    while (a>=1){
        printf("%d\n",a);
        a--;
    }
    int x=1;//c
    while (x<=9){
        printf("%d\n",x);
        x+=2;

    }
    int x1=1;//d
    while (x1<=52){
        printf("%d\n",x1);
        x1+=3;

    }
    int x2=2;//e
    int i=0;
    while (x2<=33){
        printf("%d\n",x2);

        x2+=( pow(2,i));
        i++;

    }
    int x3=1;//f
    while (x3<=100){
        if(x3%2==1){
            printf("%d\n",x3);
        }
        x3+=1;


    }
    int y=1;//g
    while (y<=100){
        if(y%2==0){
            printf("%d\n",y);
        }
        y+=1;


    }
    int y1=1;//h
    while (y1<=100){
        if(y1%3==0){
            printf("%d\n",y1);
        }
        y1+=1;


    }

    return 0;
}
