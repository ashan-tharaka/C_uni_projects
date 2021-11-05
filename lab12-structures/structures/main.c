#include <stdio.h>
#include <string.h>
struct Address{
    int homeNo;
    char street[20];
    char town[20];

};
struct Student{
    char name[30];
    int age;
    float gpa;
    struct Address a;


}s1,s2,s3[6];



int main() {
    struct Student s;
    s.age=34;
    s.gpa=3.23;
    strcpy(s.name,"ashan");
    printf("Name of the student is %s\n",s.name);
    printf("Age of the student is %d\n",s.age);
    printf("GPA of the student is %.2f\n",s.gpa);
    struct  Student st1={"Ashan",20,3.6,{12,"ssskksks","wennappuwa"}};
    struct  Address k={12,"ssskksks","wennappuwa"};

    printf("Address of student %d , %s, %s",st1.a.homeNo,s1.a.street,s1.a.town);

    printf("Enter an age for the student:");
    scanf("%d",&s.age);
    printf("Enter a gpa for the student:");
    scanf("%f",&s.gpa);
    printf("Enter the name for the student:");
    scanf("%s",s.name);
    printf("Enter a homeNO for the student:");
    scanf("%d",&s.a.homeNo);
    printf("Enter the street for the student:");
    scanf("%s",s.a.street);
    printf("Enter the town for the student:");
    scanf("%s",s.a.town);







    return 0;
}
