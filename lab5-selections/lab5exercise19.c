#include<stdio.h>

int main(){

 printf("Enter the Purchase Amount:");
 float amount;
 scanf("%f",&amount);
  float pay;
 if(amount>5000){
    pay=amount-amount*15/100;

 }
 else{
    pay=amount-amount*10/100;
 }
  printf("amount is Rs %.2f",pay);
return 0;
}
