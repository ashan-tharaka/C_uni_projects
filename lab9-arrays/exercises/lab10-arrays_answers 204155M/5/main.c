#include <stdio.h>
void Averagearray(int arr[],int size);

int main() {
    int n;
    printf("Enter the number of values:");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; ++i) {
        printf("Enter the value %d:",i+1);
        scanf("%d",&arr[i]);


    }
    Averagearray(arr,n);


    return 0;
}
void Averagearray(int arr[],int size){
    float ave=0;
    int sum=0;

    for (int i = 0; i <size ; ++i) {
        sum+=arr[i];
    }
    ave=(float)sum/(float)size;
    printf("Average of elements of array is %.2f\n",ave);

}