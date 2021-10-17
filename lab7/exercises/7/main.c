#include <stdio.h>

int main() {
    char name[20],id[10];
    int dos;
    printf("Enter the name:");
    scanf("%[^\n]%*c",name);
    printf("Enter the ID No:");
    getchar();
    scanf("%s",id);
    printf("Enter the Duration of study:");
    scanf("%d",&dos);
    printf("Name is %s\n",name);
    printf("ID Number=%s\n",id);
    printf("Duration of Study=%d years\n",dos);
    float fee=200,i=1,sum=0;
    while (i<=dos){
        printf("%.0f st year fee:$%.2f\n",i,fee);
        sum+=fee;
        fee+=(fee*5/100);

        i++;
    }
    printf("Total fee is $%.2f\n",sum);


    return 0;
}
