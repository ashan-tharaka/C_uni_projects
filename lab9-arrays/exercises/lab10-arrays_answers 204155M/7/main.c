#include <stdio.h>
#include <math.h>
int n=12;
int main() {
    float arrX[n],arrY[n],r,byx,ybar,xbar,sumX=0,sumY=0,sumXY=0,sumX2=0,sumY2=0,y,x;
    for (int i = 0; i < n; ++i) {
        printf("Enter value %d for x:",i+1);
        scanf("%f",&arrX[i]);
        printf("Enter value %d for y:",i+1);
        scanf("%f",&arrY[i]);


    }
    for (int i = 0; i < n; ++i) {
        sumX+=arrX[i];
        sumY+=arrY[i];
        sumXY+=(arrX[i]*arrY[i]);
        sumX2+=(arrX[i]*arrX[i]);
        sumY2+=(arrY[i]*arrY[i]);

    }
    r=(sumXY-sumX*sumY/n)/((sqrt(sumX2-sumX*sumX/n))*(sqrt(sumY2-sumY*sumY/n)));
    byx=(sumXY-sumX*sumY/n)/(sumX2-sumX*sumX/n);
    ybar=sumY/n;
    xbar=sumX/n;
    printf("Enter the x value:");
    scanf("%f",&x);
    y=ybar+byx*(x-xbar);
    printf("r=%.2f\n",r);
    printf("y=%.2f\n",y);






    return 0;
}
