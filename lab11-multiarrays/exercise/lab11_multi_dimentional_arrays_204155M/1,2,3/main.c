#include <stdio.h>

int main() {
    int i=3,j=3,sumrow1=0,sumrow2=0,sumrow3=0,diagonal1=0,diagonal2=0;
    int arr[3][3]={{2,3,5},{1,8,9},{6,7,0}};
    for (int k = 0; k < 3; ++k) {
        for (int l = 0; l < 3; ++l) {
            printf("%d ",arr[k][l]);

        }


        printf("\n");

    }
    for (int k = 0; k < 3; ++k) {
        sumrow1+=arr[0][k];
        sumrow2+=arr[1][k];
        sumrow3+=arr[2][k];
        diagonal1+=arr[k][k];
        diagonal2+=arr[k][2-k];



    }
    printf("1 st row sum=%d\n",sumrow1);
    printf("2 nd row sum=%d\n",sumrow2);
    printf("3 rd row sum=%d\n",sumrow3);
    printf("1 st diagonal sum=%d\n",diagonal1);
    printf("2 nd diagonal sum=%d\n",diagonal2);



    return 0;
}
