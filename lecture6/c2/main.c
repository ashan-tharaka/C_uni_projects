#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(int i=0;i<5;i++){
        for(int x=5;x>i;x--){
            printf(" * ");
        }
        printf("\n");

    }

    return 0;
}
