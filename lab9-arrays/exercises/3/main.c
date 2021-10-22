#include <stdio.h>

int main() {
    int ages[10],count=0;
    for (int i = 0; i < 10; ++i) {
        printf("Enter the age of student %d:",i+1);
        scanf("%d",&ages[i]);
        if(ages[i]>=17 &&ages[i]<=19){
            count++;

        }



    }
    printf("count of students who has the age in between 17-19 (inclusive of 17 and 19) is %d",count);

    return 0;
}
