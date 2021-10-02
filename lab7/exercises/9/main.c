#include <stdio.h>

int main() {
    while (1){
        float sales;
        printf("Input gross sales($):");
        scanf("%f",&sales);
        if(sales==-1){
            return 0;

        }
        else if(sales>0){
            float earning;
            earning=200+sales*9/100;
            printf("salesperson earning is $%.2f\n",earning);


        }
        else{
            printf("Invalid\n");

        }
    }


    return 0;
}
