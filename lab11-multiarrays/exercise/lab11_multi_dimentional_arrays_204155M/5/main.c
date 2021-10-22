#include <stdio.h>

int main() {
    int n=2;
    int arr1[n][n];
    int arr2[n][n];
    int sumarr[n][n];


    printf("Enter the first matrix elements:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Enter the row %d column %d value:",i+1,j+1);
            scanf("%d",&arr1[i][j]);

        }

    }
    printf("Enter the second matrix elements:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Enter the row %d column %d value:",i+1,j+1);
            scanf("%d",&arr2[i][j]);

        }

    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            sumarr[i][j]=arr1[i][j]+arr2[i][j];



        }
    }
    printf("Sum matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ",sumarr[i][j]);

        }
        printf("\n");

    }
    return 0;
}
