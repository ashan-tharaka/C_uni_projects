#include <stdio.h>


struct Student{
    char name[20];
    int roll;

};

void printStruct(struct Student s1);
int main() {
    struct Student s;
    printf("Enter student's name:");
    scanf("%[^\n]s",s.name);
    printf("Enter roll number:");
    scanf("%d",&s.roll);
    printf("Output\n");
    printStruct(s);


    return 0;
}
void printStruct(struct Student s1){
    printf("Name:%s\nRoll:%d",s1.name,s1.roll);


}