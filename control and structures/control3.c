#include<stdio.h>
int main(){

//exercise5
char a;
printf("Enter a letter: ");
scanf("%c",&a);

if((a>='a'&& a<='z')||(a>='A' && a<='Z')){

   printf("it is a letter\n");
   if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
    printf("It is a vowel\n");
   }
   else{
    printf("It is not a vowel\n");
   }


}
else{
    printf("It is not a letter\n");
}


return 0;

}
