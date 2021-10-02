
#include<stdio.h>
int main(){
printf("Enter a character:");
char c;
scanf("%c",&c);
if((c>='a' && c<='z')||(c>='A'&&c<='Z')){
    printf("It is a Alphabet\n");

}
else{
    printf("Not a Alphabet\n");
}

return 0;
}
