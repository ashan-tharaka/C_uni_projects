#include <stdio.h>

int main() {

    printf("Enter the telephone code:");
    int code;
    scanf("%d",&code);
    switch (code) {
        case 11:
            printf("Delhi\n");
            break;
        case 22:
            printf("Mumbai\n");
            break;
        case 33:
            printf("Kolkata\n");
            break;
        case 40:
            printf("Chennai\n");
            break;
        default:
            printf("Area code is not recognized\n");

    }
    return 0;
}
