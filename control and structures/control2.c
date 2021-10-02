#include<stdio.h>
int main(){
//exercise4

int x;

printf("Enter a week number(1-7):");
scanf("%d",&x);
if(x==1){
    printf("Monday\n");
}
else if(x==2){
    printf("Tuesday\n");
}
else if(x==3){
    printf("wednesday\n");
}
else if(x==4){
    printf("Thursday\n");
}
else if(x==5){
    printf("Friday\n");
}
else if(x==6){
    printf("Saturday\n");
}
else if(x==7){
    printf("Sunday\n");
}

//exercise5
char a;
printf("Enter a letter: ");
scanf("%c",&a);

if((a>='a'&& a<='z')||(a>='A' && a<='Z')){
        printf("it is a letter\n");

}
else{
    printf("It is not a letter\n");
}



return 0;

}
