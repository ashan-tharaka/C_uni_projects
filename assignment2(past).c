
#include<stdio.h>


int main(){
//5
float F,C;
printf("Enter the temperature in Fahrenheit:");
scanf("%f",&F);
C=(F-32)/1.8;
printf("Temperature is %.2fC\n",C);
//6
int a;
printf("Enter a Integer:");
scanf("%d",&a);
if(a%2==0){
    printf("It is a Even\n");

}
else{
    printf("It is a Odd\n");
}
//7

return 0;

}
