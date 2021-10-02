#include <stdio.h>

int main() {
    printf("Type in a Character from a to e:\n");
    char c;
    scanf("%c",&c);
    while(c>='a'&&  c<='e'){
        printf("That's good\nPlay Again. (Enter 'n' for No and 'y' for Yes):");
        getchar();
        char c1;
        scanf("%c",&c1);
        if(c1=='n'){
            return 0;

        }
        else{

        }



    }
    while(c>'e' ||c<'a'){
        printf("Sorry %c Is Incorrect\nTry Again\n",c);
        break;

    }


    return 0;
}
