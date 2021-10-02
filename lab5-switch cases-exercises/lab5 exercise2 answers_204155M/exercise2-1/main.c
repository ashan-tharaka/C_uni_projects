#include <stdio.h>

int main() {
    int a;
    printf("Enter a num:");
    scanf("%d",&a);
    switch (a) {
        case 20:
            printf("I like Ice Cream\n");
            break;
        case 30:
            printf("I like Chocolate\n");
            break;
        case 60:
            printf("I like Apple\n");
            break;
        default:
            printf("I do not like anything\n");

    }




    return 0;
}
