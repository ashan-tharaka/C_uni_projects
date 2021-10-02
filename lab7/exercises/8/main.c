#include <stdio.h>

int main() {
    while (1){
        printf("Enter First Number, operator, second number:");
        float fn,sn;
        char c;
        float ans;
        scanf("%f%c%f",&fn,&c,&sn);
        if(c=='+') {
            ans = fn + sn;
        }
        else if(c=='-') {
            ans = fn -sn;
        }
        else if(c=='*') {
            ans = fn * sn;
        }
        else if(c=='/') {
            ans = fn / sn;
        }
        else{
            printf("Invalid Operator\n");
            break;
        }

        printf("Answer=%f\n",ans);
        printf("Do You Want To Try It Again(y/n)? ");
        char c1;
        getchar();
        scanf("%c",&c1);
        if(c1=='n'){
            break;
        }



    }



    return 0;
}
