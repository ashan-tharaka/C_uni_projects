#include <stdio.h>
struct Student{

    char name[20];
    int marks;

}s[10];
int main() {
    printf("Enter information of students:\n");
    for (int i = 0; i < 2; ++i) {
        printf("For roll number %d\n",i+1);
        printf("Enter name:");
        scanf("%s",s[i].name);
        printf("Enter marks:");
        scanf("%d",&s[i].marks);
        printf("\n");


    }
    printf("Displaying information of students:\n\n");
    for (int i = 0; i < 2; ++i) {
        printf("information for roll number %d\n",i+1);
        printf("Name: %s\n",s[i].name);
        printf("Marks: %d\n",s[i].marks);


    }

    return 0;
}
