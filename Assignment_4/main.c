#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n = 0;

void addStudent();
void displayStudent();
void searchStudent();
void updateStudent();
void deleteStudent();

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("Program Exited.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[n].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[n].name);

    printf("Enter Marks: ");
    scanf("%f", &s[n].marks);

    n++;

    printf("Student Added Successfully!\n");
}

void displayStudent()
{
    int i;

    if(n == 0)
    {
        printf("No Student Records Found.\n");
        return;
    }

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("Marks       : %.2f\n", s[i].marks);
    }
}

void searchStudent()
{
    int roll, i, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", s[i].roll);
            printf("Name        : %s\n", s[i].name);
            printf("Marks       : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Student Not Found.\n");
    }
}

void updateStudent()
{
    int roll, i, found = 0;

    printf("Enter Roll Number to Update: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", s[i].name);

            printf("Enter New Marks: ");
            scanf("%f", &s[i].marks);

            printf("Record Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Student Not Found.\n");
    }
}

void deleteStudent()
{
    int roll, i, j, found = 0;

    printf("Enter Roll Number to Delete: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            for(j = i; j < n - 1; j++)
            {
                s[j] = s[j + 1];
            }

            n--;

            printf("Student Deleted Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Student Not Found.\n");
    }
}