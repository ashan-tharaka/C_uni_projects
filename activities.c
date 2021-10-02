#include<stdio.h>

int main()
{
    //3
    printf("ABC Auto Repair Service Invoice\n\n\n   Parts\t\txxxx\n\n   Labor\t\txxxx\n\n   Sales Tax\t\txxxx\n\n\t\t\t----\n\n   Total\t\txxxx\n");
    //4
    int a1=5;
    int b1=4;
    int c1;
    c1=a1+b1;
    printf("%d\n",c1);
    c1=a1-b1;
    printf("%d\n",c1);
    c1=a1*b1;
    printf("%d\n",c1);
    c1=a1/b1;
    printf("%d\n",c1);
    c1=a1%b1;
    printf("%d\n\n\n",c1);

    //5
    //6
    int a = 11, b = 2, c;
    float x = 3.0, y;
    y = a * b;
    printf("%.2f\n",y);

    c = a * b;
    printf("%d\n",c);

    y = a / b;
    printf("%.2f\n",y);

    c = a / b;
    printf("%d\n",c);
    y = a * x;
    printf("%.2f\n",y);
    c = b * x;
    printf("%d\n",c);
    y = a / x;
    printf("%.2f\n",y);
    c = a / x;
    printf("%d\n\n\n",c);
    //7
    int x1;
    int y1;
    printf("Enter a Number1:");
    scanf("%d",&x1);

    printf("Enter a Number2:");
    scanf("%d",&y1);
    int sum=x1+y1;
    printf("%d\n\n\n",sum);
    //8
    int size;

    printf("Emter a size of file in bits :");
    scanf("%d",&size);
    float byte=size/8;
    printf("%.2f\n",byte);



    return 0;

}
