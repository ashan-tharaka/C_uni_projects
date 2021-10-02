#include <stdio.h>

int main() {
    int num1,num2;
    char c;
    printf("Enter the two operands:");
    scanf("%d %d",&num1,&num2);
    printf("Enter the operator:");
    getchar();
    scanf("%c",&c);
    int ans;
    switch (c)
    {
        case '+':
            ans=num1+num2;
            printf("%d\n",ans);
            break;
        case '-':
            ans=num1-num2;
            printf("%d\n",ans);
            break;
        case '*':
            ans=num1*num2;
            printf("%d\n",ans);
            break;
        case '/':
            ans=num1/num2;
            printf("%d\n",ans);
            break;
        default:
            printf("Invalid operand\n");



    }




    return 0;
}
