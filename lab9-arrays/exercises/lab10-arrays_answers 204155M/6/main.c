#include <stdio.h>
void sort(int arr[],int size);
int main() {
    int n;
    printf("Enter the number of values:");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; ++i) {
        printf("Enter the value %d:",i+1);
        scanf("%d",&arr[i]);

    }
    sort(arr,n);

    return 0;
}

void sort(int arr[],int size){
    int temp;
    for (int i = 0; i < size-1; ++i) {
        for (int j = i+1; j <size ; ++j) {
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
        }

    }



    }
    printf("After descending\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ",arr[i]);

    }

}