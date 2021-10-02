#include <stdio.h>
#include <process.h>

int main() {
    int countp=0,countn=0,multi=0,sump=0,sumn=0,max=0,min=0;
    printf("Enter the numbers:");
    do{
        int i;

        scanf("%d ",&i);

        if(min>=i){
            min=i;
        }
        if(max<=i){
            max=i;

        }



        if(i>0){
            countp++;
            sump+=i;
            if(i%3==0){
                multi++;

            }

        }
        else if(i<0){
            countn++;
            sumn+=i;
        }



         else if(i==0) {
             break;
         }

    } while (1);

    printf("Number of positive integers: =%d\n",countp);
    printf("Number of negative integers: =%d\n",countn);
    printf("Sum of positive integers: =%d\n",sump);
    printf("Sum of negative integers: =%d\n",sumn);
    printf("Number of multipliers of 3 :=%d\n",multi);
    printf("Maximum value: =%d\n",max);
    printf("Minimum value: =%d\n",min);




    return 0;
}
