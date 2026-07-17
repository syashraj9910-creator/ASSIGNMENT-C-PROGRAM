#include <stdio.h>

void display(int marks[], int n);
void highest(int marks[], int n);
void lowest(int marks[], int n);
void totalAverage(int marks[], int n);
void search(int marks[], int n);
void sort(int marks[], int n);

int main()
{
    int marks[100];
    int n, choice, i;

    printf("===== STUDENT MARKS ANALYZER =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks of %d students:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Display Marks\n");
        printf("2. Highest Marks\n");
        printf("3. Lowest Marks\n");
        printf("4. Total & Average\n");
        printf("5. Search Marks\n");
        printf("6. Sort Marks\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                display(marks, n);
                break;

            case 2:
                highest(marks, n);
                break;

            case 3:
                lowest(marks, n);
                break;

            case 4:
                totalAverage(marks, n);
                break;

            case 5:
                search(marks, n);
                break;

            case 6:
                sort(marks, n);
                break;

            case 7:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}

void display(int marks[], int n)
{
    int i;

    printf("\nStudent Marks:\n");

    for(i = 0; i < n; i++)
    {
        printf("Student %d : %d\n", i + 1, marks[i]);
    }
}

void highest(int marks[], int n)
{
    int i, high = marks[0];

    for(i = 1; i < n; i++)
    {
        if(marks[i] > high)
        {
            high = marks[i];
        }
    }

    printf("Highest Marks = %d\n", high);
}

void lowest(int marks[], int n)
{
    int i, low = marks[0];

    for(i = 1; i < n; i++)
    {
        if(marks[i] < low)
        {
            low = marks[i];
        }
    }

    printf("Lowest Marks = %d\n", low);
}

void totalAverage(int marks[], int n)
{
    int i, total = 0;
    float average;

    for(i = 0; i < n; i++)
    {
        total += marks[i];
    }

    average = (float)total / n;

    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);
}

void search(int marks[], int n)
{
    int key, i, found = 0;

    printf("Enter marks to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(marks[i] == key)
        {
            printf("Marks found at Student %d\n", i + 1);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Marks not found.\n");
    }
}

void sort(int marks[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(marks[j] > marks[j + 1])
            {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    printf("Marks after sorting:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", marks[i]);
    }

    printf("\n");
}