#include <stdio.h>

struct students
{
    char name[10];
    int rollNo;
    char phone[10];
};

int main()
{
    int n;
    printf("Enter the no. of students: ");
    scanf("%d", &n);
    struct students s[2];
    // inputing data
    for (int i = 0; i < n; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", &s[i].name);;
        printf("Enter Roll No: ");
        scanf("%d", &s[i].rollNo);
        printf("Enter Mobile No: ");
        scanf("%s", &s[i].phone);
        printf("\n");
    }
    // printing data
    printf("\nPrinting students details: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].rollNo);
        printf("Mobile No: %s\n", s[i].phone);
        printf("\n");
    }

    return 0;
}