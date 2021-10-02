#include<stdio.h>
int main(){

int side1,side2,side3;
printf("Enter lengths of sides:");
scanf("%d%d%d",&side1,&side2,&side3);

if(side1==side2&&side2==side3){
        printf("It is a equilateral triangle\n");


}
else if(side1==side2|| side1==side3|| side2==side3){
    printf("It is a isosceles triangle\n");

}
else{
    printf("It is a scalene triangle\n");
}

return 0;}
