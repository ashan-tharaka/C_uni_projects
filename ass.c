
#include<stdio.h>


int main(){
char a1;
printf("Enter a character: ");
scanf("%c",&a1);
if((a1>='a'&&a1<='z')||(a1>='A'&&a1<='Z')){
    printf("It is a character\n");
}
else{
    printf("It is not a character\n");
    }
//8
int a;
printf("Enter a value:");
scanf("%d",&a);
if(a>60){
    printf("I like Apple\n");
}
else if(a>30){
    printf("I like Chocolate\n");
}
else if(a>20){
    printf("I like Ice Cream\n");

}
else{
    printf("I do not like anything\n");

}
return 0;

}
