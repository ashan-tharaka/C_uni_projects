#include <stdio.h>

int main() {
    float  amount,discount;
    char m;
    printf("Enter the amount:");
    scanf("%f",&amount);
    printf("Member or not(m/n):");
    getchar();
    scanf("%c",&m);
    switch (m) {
        case 'm':
            if(amount>5000){
                discount=amount*0.15;
            }
            else{
                discount=amount*0.1;

            }
            printf("Net perchase amout is:Rs.%.2f",amount-discount);
            break;
        case 'n':
            if(amount>5000){
                discount=amount*0.07;

            }
            else{
                discount=0;
            }
            printf("Net perchase amout is:Rs.%.2f",amount-discount);
            break;
        default:
            printf("Not valid input\n");



    }




    return 0;
}
