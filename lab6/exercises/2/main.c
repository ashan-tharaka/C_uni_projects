#include <stdio.h>

int main() {
  int sum=0;
  for(int i=1;i<=10;i++){
      sum+=i;
  }

    printf("%d\n",sum);
  int mul=1;
    for(int i=1;i<=10;i++){
        mul*=i;
    }
    printf("%d\n",mul);
    int count=0;
    for(int i=2;i<=50;i+=2){
        count+=1;
    }
    printf("%d\n",count);
    int count1=0;
    for(int i=1;i<=50;i+=2){
        count1+=1;
    }
    printf("%d\n",count1);


  return 0;
}
