#include <stdio.h>

int main() {
    int countp=0,countn=0,multi=0,sump=0,sumn=0,max=0,min=0;
    int i;
    printf("Enter the number:");
    scanf("%d",&i);
    do{
        if(i==0){

            break;
        }

        else if(i>0){
            countp++;
            sump+=i;


        }
        else if(i<0){
            countn++;
            sumn+=i;
        }




        if(min>=i){
            min=i;
        }
        if(max<=i){
            max=i;

        }
        if(i%3==0){
            multi++;

        }

        printf("Enter the number:");
        scanf("%d",&i);



    } while (i!=0);

    printf("Number of positive integers: =%d\n",countp);
    printf("Number of negative integers: =%d\n",countn);
    printf("Sum of positive integers: =%d\n",sump);
    printf("Sum of negative integers: =%d\n",sumn);
    printf("Number of multipliers of 3 :=%d\n",multi);
    printf("Maximum value: =%d\n",max);
    printf("Minimum value: =%d\n",min);




    return 0;
}

