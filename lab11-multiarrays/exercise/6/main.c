#include <stdio.h>

int main() {
    int matrix1[3][3]={{2,2,3},{3,2,4},{1,3,4}};
    int matrix2[3][3]={{3,5,7},{4,2,1},{3,2,1}};
    int summatrix[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int sum1=0;
            for (int k = 0; k <3 ; ++k) {

                    sum1 +=(matrix1[i][k]*matrix2[k][j]);


            }
            summatrix[i][j]=sum1;
            printf("%d ",summatrix[i][j]);


        }



        printf("\n");
        }



    return 0;
}
