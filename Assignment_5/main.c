#include <stdio.h>
#include <stdlib.h>

void display(int *marks, int n);
void highest(int *marks, int n);
void lowest(int *marks, int n);
void average(int *marks, int n);

int main()
{
    int *marks;
    int n, i, choice;

    printf("===== Dynamic Array Management =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    marks = (int *)malloc(n * sizeof(int));

    if(marks == NULL)
    {
        printf("Memory Allocation Failed!\n");
        return 1;
    }

    printf("Enter marks:\n");

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
        printf("4. Average Marks\n");
        printf("5. Free Memory\n");
        printf("6. Exit\n");

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
                average(marks, n);
                break;

            case 5:
                free(marks);
                marks = NULL;
                printf("Memory Released Successfully.\n");
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

void display(int *marks, int n)
{
    int i;

    printf("\nStudent Marks:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", marks[i]);
    }

    printf("\n");
}

void highest(int *marks, int n)
{
    int i;
    int high = marks[0];

    for(i = 1; i < n; i++)
    {
        if(marks[i] > high)
            high = marks[i];
    }

    printf("Highest Marks = %d\n", high);
}

void lowest(int *marks, int n)
{
    int i;
    int low = marks[0];

    for(i = 1; i < n; i++)
    {
        if(marks[i] < low)
            low = marks[i];
    }

    printf("Lowest Marks = %d\n", low);
}

void average(int *marks, int n)
{
    int i, total = 0;

    for(i = 0; i < n; i++)
    {
        total += marks[i];
    }

    printf("Average Marks = %.2f\n", (float)total / n);
}