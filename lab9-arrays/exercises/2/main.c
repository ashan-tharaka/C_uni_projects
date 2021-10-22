#include <stdio.h>

int main() {
    printf("Enter the number of values:");
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        printf("Enter the value %d :",i+1);
        scanf("%d",&arr[i]);

    }
    int min=arr[0];
    for (int i = 0; i < n; ++i) {
        if(min>arr[i]){
            min=arr[i];

        }


    }
    printf("smallest number is %d",min);
    return 0;
}
