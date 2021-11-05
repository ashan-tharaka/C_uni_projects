#include <stdio.h>
union Student {
    char name[30];
    int age;
    float gpa;

};
    int main()
{
  /*  printf("Hello\b\b");

    int a=10,*p;
   p=&a;
    printf("%X\n",&a);
    int i,j;
    for (i = 3/2,j=9/2; i <=j ; i++,j--) {
        printf("%d",i+j);


    }
    printf("\n%d", sizeof(unsigned char));
    printf("\n%.2f\n",3.56+1.126);

    int a2=10,b=5,c=0;
    if(!a2>=20){
        b>>1;
    }
    else{
        c<<1;

    }
    printf("b=%d c=%d\n",b,c);
    int a3='a';
    int b1=0;
    b1+=a3++;
    printf("%c%c\n",a3,b1);
    char c1;
    printf("Enter:");
    c1=getchar();
    switch (c1) {
        case 'R':
            printf("Red");
        case 'G':
            printf("Green");
        case 'B':
            printf("Blue");
        default:
            printf("Error");
            break;


    }





*/



  int x=!(-3&&2)||(3!=2);
  int y=!(3||-2)&&(3!=2);
    printf("%d \n",x^y);



    return 0;
}
