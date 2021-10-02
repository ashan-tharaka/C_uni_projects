#include <stdio.h>

int main() {
    char c;
    printf("Enter the grade:");
    scanf("%c",&c);
    switch (c) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':case 'C':
            printf("Well Done\n");
            break;
        case 'D':
            printf("You Pass\n");
            break;
        case 'F':
            printf("Better Try Again\n");
            break;
        default:
            printf("Invalid Grade\n");



    }
    return 0;
}
