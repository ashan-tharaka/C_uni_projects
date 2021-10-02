#include <stdio.h>

int main() {

    printf("Enter a letter:");
    char  c;
    scanf("%c",&c);
    switch (c) {
        case 'a':case 'e':case 'i':case 'o':case 'u':
        case 'A':case 'E':case 'I':case 'O':case 'U':
            printf("vowel\n");
            break;

        default:
            printf("consonant\n");



    }



    return 0;

}
