#include<stdio.h>
int main(){

printf("Enter a starting point:");
float a;
scanf("%f",&a);
printf("Enter a ending point:");
float b;
scanf("%f",&b);
float units=b-a;
float bill;
if(units<100){
     bill=units*1.5;




}
else if(units<200&& units>=100){
    bill=99*1.5+(units-99)*2.5;



}

else{
bill=99*1.5+100*2.5+(units-199)*3.5;

}


  printf("bill amount is Rs.%.2f\n",bill);
return 0;
}
