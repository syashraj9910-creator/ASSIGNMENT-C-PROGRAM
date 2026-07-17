#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void addRecord();
void displayRecord();
void appendRecord();
void searchRecord();
void countRecord();

int main()
{
    int choice;

    do
    {
        printf("\n===== FILE HANDLING SYSTEM =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display Records\n");
        printf("3. Append Record\n");
        printf("4. Search Record\n");
        printf("5. Count Records\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addRecord();
                break;

            case 2:
                displayRecord();
                break;

            case 3:
                appendRecord();
                break;

            case 4:
                searchRecord();
                break;

            case 5:
                countRecord();
                break;

            case 6:
                printf("Program Exited.\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }while(choice!=6);

    return 0;
}

void addRecord()
{
    FILE *fp;
    struct Student s;

    fp=fopen("student.txt","w");

    printf("Enter Roll Number: ");
    scanf("%d",&s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]",s.name);

    printf("Enter Marks: ");
    scanf("%f",&s.marks);

    fwrite(&s,sizeof(s),1,fp);

    fclose(fp);

    printf("Record Saved Successfully.\n");
}

void displayRecord()
{
    FILE *fp;
    struct Student s;

    fp=fopen("student.txt","r");

    if(fp==NULL)
    {
        printf("File Not Found.\n");
        return;
    }

    printf("\nStudent Records\n");

    while(fread(&s,sizeof(s),1,fp))
    {
        printf("\nRoll : %d\n",s.roll);
        printf("Name : %s\n",s.name);
        printf("Marks: %.2f\n",s.marks);
    }

    fclose(fp);
}

void appendRecord()
{
    FILE *fp;
    struct Student s;

    fp=fopen("student.txt","a");

    printf("Enter Roll Number: ");
    scanf("%d",&s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]",s.name);

    printf("Enter Marks: ");
    scanf("%f",&s.marks);

    fwrite(&s,sizeof(s),1,fp);

    fclose(fp);

    printf("Record Appended Successfully.\n");
}

void searchRecord()
{
    FILE *fp;
    struct Student s;
    int roll,found=0;

    fp=fopen("student.txt","r");

    if(fp==NULL)
    {
        printf("File Not Found.\n");
        return;
    }

    printf("Enter Roll Number: ");
    scanf("%d",&roll);

    while(fread(&s,sizeof(s),1,fp))
    {
        if(s.roll==roll)
        {
            printf("\nRecord Found\n");
            printf("Roll : %d\n",s.roll);
            printf("Name : %s\n",s.name);
            printf("Marks: %.2f\n",s.marks);
            found=1;
            break;
        }
    }

    if(found==0)
        printf("Record Not Found.\n");

    fclose(fp);
}

void countRecord()
{
    FILE *fp;
    struct Student s;
    int count=0;

    fp=fopen("student.txt","r");

    if(fp==NULL)
    {
        printf("File Not Found.\n");
        return;
    }

    while(fread(&s,sizeof(s),1,fp))
    {
        count++;
    }

    fclose(fp);

    printf("Total Records = %d\n",count);
}