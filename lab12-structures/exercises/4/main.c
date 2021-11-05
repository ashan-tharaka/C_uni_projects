#include <stdio.h>

struct Complex{
    float real;
    float i;
};
void Add(struct Complex c1,struct Complex c2);
int main() {
    struct Complex c1,c2;
    printf("For 1st complex number\n");
    printf("Enter real and imaginary respectively:");
    scanf("%f",&c1.real);
    scanf("%f",&c1.i);
    printf("\nFor 2nd complex number\n");
    printf("Enter real and imaginary respectively:");
    scanf("%f",&c2.real);
    scanf("%f",&c2.i);
    Add(c1,c2);



    return 0;
}

void Add(struct Complex c1,struct Complex c2){
    float sumreal=0,sumi=0;
    sumreal=c1.real+c2.real;
    sumi=c1.i+c2.i;
    printf("Sum=%.1f+%.1fi",sumreal,sumi);


}