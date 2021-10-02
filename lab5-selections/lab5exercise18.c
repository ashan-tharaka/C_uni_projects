#include<stdio.h>

int main(){

printf("Enter the speed:");
float speed;
scanf("%f",&speed);
if(speed>=31&&speed<=40){
    printf("Fine is 50 pounds\n");

}
else if(speed>40&&speed<=50){
    printf("Fine is 75 pounds\n");
}
else if (speed >50){
    printf("Fine is 100 pounds\n");

}
else{
    printf("No Fine\n");

}
return 0;
}
