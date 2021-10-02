#include <stdio.h>

int main() {
    printf("Enter the year:");
    int year,month;
    scanf("%d",&year);
    printf("Enter the month as (1/2/3/4/5/6/7/8/9/10/11/12):");
    scanf("%d",&month);
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Number of days is %d\n",31);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Number of days is %d\n",30);
            break;
        case 2:
            switch (year%4) {
                case 0:
                    printf("Number of days is %d\n",29);
                    break;
                default:
                    printf("Number of days is %d\n",28);


            }


            break;
        default:
            printf("Invaid input");

    }

    return 0;
}
