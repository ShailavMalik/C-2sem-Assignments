#include <stdio.h>

struct student
{
    char name[15];
    int rollNo;

    // nesting structure
    struct marks
    {
        int totalMarks;
        int maxMarks;
        float percent;
    } m;
};

int main()
{
    struct student s1;
    // inputing student information
    printf("Enter name: ");
    gets(s1.name);
    printf("Enter rollNo: ");
    scanf("%d", &s1.rollNo);

    printf("Enter Max Marks: ");
    scanf("%d", &s1.m.maxMarks);
    printf("Enter Total marks obtained: ");
    scanf("%d", &s1.m.totalMarks);
    // calculating percentage
    s1.m.percent = ((float)s1.m.totalMarks / s1.m.maxMarks) * 100;

    printf("\nprinting student information: \n");
    printf("Name: %s\n", s1.name);
    printf("Roll No: %d\n", s1.rollNo);
    printf("Max Marks: %d\n", s1.m.maxMarks);
    printf("Obtained Marks: %d\n", s1.m.totalMarks);
    printf("Percentage: %f%%\n", s1.m.percent);

        return 0;
}