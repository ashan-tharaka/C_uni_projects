#include <stdio.h>
struct Student{
    char name[20];
    int age;
    float gpa;

};
int main() {
    struct Student s;
    printf("Enter the name:");
    scanf("%[^\n]s",s.name);
    printf("Enter the Age:");
    scanf("%d",&s.age);
    printf("Enter the GPA:");
    scanf("%f",&s.gpa);
    printf("Name is %s\n",s.name);
    printf("Age is %d\n",s.age);
    printf("Gpa is %.2f",s.gpa);



    return 0;
}
