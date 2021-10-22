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
    int max=arr[0];
    for (int i = 0; i < n; ++i) {
      if(max<arr[i]){
          max=arr[i];

      }


    }
    printf("highest number is %d",max);




    return 0;
}
