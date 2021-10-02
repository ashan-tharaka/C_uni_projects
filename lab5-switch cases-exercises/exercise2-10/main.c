#include <stdio.h>

int main() {

    printf("Enter a number(<999):");
    int num;
    scanf("%d",&num);
    if(num>0&& num<10){
        printf("Number of digits is %d\n",1);

    }
    else  if(num>=10&& num<100){
        printf("Number of digits is %d\n",2);

    }
    else  if(num>=100&& num<999){
        printf("Number of digits is %d\n",3);

    } else{
        printf("Invalid Number\n");
    }


    return 0;
}
