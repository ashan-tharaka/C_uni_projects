#include<stdio.h>


int main(){

//10
 char c;
 int amount;
 printf("Are you a member (Y/N):");
 scanf("%c",&c);
 switch(c){
 case 'Y':
     printf("Enter your purchase amount:");
     scanf("%d",&amount);
     if(amount>5000){
        printf("Your discount is 15%%\n");
    }
    else{
                printf("Your discount is 10%%\n");
             }
        break;
 case 'N':
    printf("Enter your purchase amount:");
    scanf("%d",&amount);
    if(amount>5000){
        printf("Your discount is 7%%\n");
    }
    else{
                printf("you aren't given discount\n");
             }
             break;
 default:
    printf("Enter valid answer\n");

 }

return 0;

}
