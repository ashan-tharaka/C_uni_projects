#include <stdio.h>
struct Distance{
    int feet;
    float inch;

};
int main() {
     struct Distance d1,d2;
     printf("Enter information for 1st distance\n");
     printf("Enter feet:");
     scanf("%d",&d1.feet);
     printf("Enter inch:");
     scanf("%f",&d1.inch);

    printf("\nEnter information for 2nd distance\n");
    printf("Enter feet:");
    scanf("%d",&d2.feet);
    printf("Enter inch:");
    scanf("%f",&d2.inch);
    int sumfeet=d1.feet+d2.feet;
    float suminch=d1.inch+d2.inch;
    if(suminch>=12){
        sumfeet+=((int)suminch/12);
        suminch-=(((int)suminch/12)*12);

    }
    printf("\nSum of distances=%d\'-%.1f\"",sumfeet,suminch);






    return 0;
}
