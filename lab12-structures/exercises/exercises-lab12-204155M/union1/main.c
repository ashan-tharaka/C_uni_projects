#include <stdio.h>
#include <string.h>
union Student{
    int roll;
    char name[10];
    int marks;

};
int main() {
    union Student s;
    s.roll=1;
    strcpy(s.name,"ashan");
    s.marks=100;

    printf("Roll number:%d\n",s.roll);
    printf("Name:%s\n",s.name);
    printf("Marks:%d\n",s.marks);


    return 0;
}
