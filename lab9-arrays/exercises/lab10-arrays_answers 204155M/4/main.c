#include <stdio.h>

int main() {
    int salaries[10],count=0;
    for (int i = 0; i < 10; ++i) {
        printf("Enter the salary of employee %d:",i+1);
        scanf("%d",&salaries[i]);
        if(salaries[i]>=50000 &&salaries[i]<=75000){
            count++;

        }



    }
    printf("count of employees who has the salary  in between 50,000 – 75,000 (inclusive of 50,000 and 75,000)is %d",count);

    return 0;
}
