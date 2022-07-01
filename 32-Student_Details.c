#include <stdio.h>
#include <string.h>

struct student
{
    char name[15];
    int marks;
    float percent;
    int rollNo;
} student1;

int main()
{
    printf("Enter name: ");
    gets(student1.name);
    printf("Enter rollNo: ");
    scanf("%d", &student1.rollNo);
    printf("Enter marks: ");
    scanf("%d", &student1.marks);
    student1.percent = ((float)student1.marks / 600) * 100;

    printf("\nPrinting student details: \n");
    printf("Name: %s\n", student1.name);
    printf("RollNo: %d\n", student1.rollNo);
    printf("Marks: %d\n", student1.marks);
    printf("Percent: %f%%", student1.percent);

    return 0;
}