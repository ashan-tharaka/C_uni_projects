#include<stdio.h>
int main(){

printf("Enter a value:");
int a;
scanf("%d",&a);
if(a>60){
        printf("I like Ice Cream\n");
}
else if(a>30){
    printf("I like Chocolate\n");

}
else if(a>20){
    printf("I like Apple\n");

}
else{
    printf("I do not like anything\n");
}
return 0;
}
