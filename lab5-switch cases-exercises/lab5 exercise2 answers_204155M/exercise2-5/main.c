#include <stdio.h>
#include <math.h>

int main() {
    float area;


    printf("What is your choice among cirale,rectangle and triangle(c/r/t): ");
    char c;
    scanf("%c",&c);
    switch (c) {
        case 'c':
            printf("Enter the radius of circle:");
            float r;
            float pi=3.14;
            scanf("%f",&r);
            area=pi*r*r;
            printf("The area is %.2f\n",area);
            break;
        case 'r':
            printf("Enter the length of rectangle:");
            float l,m;
            scanf("%f",&l);
            printf("Enter the width of rectangle:");
            scanf("%f",&m);
            area=l*m;
            printf("The area is %.2f\n",area);
            break;

        case 't':
            printf("Enter the height of the traingle:");
            float h,b;
            scanf("%f",&h);
            printf("Enter the length of base  of the traingle:");
            scanf("%f",&b);
            area=(h*b)/2;
            printf("The area is %.2f\n",area);
            break;
        default:
            printf("Invalid letter\n");


    }





    return 0;
}
