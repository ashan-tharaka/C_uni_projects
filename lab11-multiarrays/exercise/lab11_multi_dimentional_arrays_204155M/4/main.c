#include <stdio.h>

int main() {
    int n=3;
    int arr[n][n];

    printf("Enter 9 numbers:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d",&arr[i][j]);

        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ",arr[i][j]);

        }
        printf("\n");

    }

    return 0;
}
