#include<stdio.h>
int main(){
int x;
printf("Enter a number:");
scanf("%d",&x);

if(x>3){
    printf("Entered value is greater than 3\n");
}
else{
    printf("Entered value is less than or equal to 3\n");

}

printf("End\n");
//exercise1
int y;
printf("Enter a Number:");
scanf("%d",&y);
if(y>0){
    printf("Number is positive\n");

}
 if(y<0){
    printf("Number is negative\n");

}
//exercise2
int num;
printf("Enter a Number:");
scanf("%d",&num);
if(num%2==0){
    printf("It is a even number\n");

}
else{
    printf("It is a odd number\n");
}
//exercise3
int a,b;
printf("Enter a first Number:");
scanf("%d",&a);
printf("Enter a second number:");
scanf("%d",&b);
if(a==b){
    printf("Numbers are equal");

}
else{
    printf("Numbers are not equal");

}

return 0;

}

