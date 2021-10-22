#include <stdio.h>
double  triangleArea(double base,double height);

int main() {
    double base,height;
    printf("Enter the integer1:");
    scanf("%lf",&base);
    printf("Enter the integer2:");
    scanf("%lf",&height);
    printf("Area of traingle is %.2lf", triangleArea(base,height));

    return 0;
}
double  triangleArea(double base,double height){
    double area=base*height/2;
    return area;
}