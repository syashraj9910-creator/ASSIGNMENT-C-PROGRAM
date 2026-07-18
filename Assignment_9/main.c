#include <stdio.h>
#include <stdlib.h>

int *arr;
int n = 0;

void createArray();
void displayArray();
void insertElement();
void deleteElement();
void updateElement();
void linearSearch();
void binarySearch();
void sortArray();

int main()
{
    int choice;

    createArray();

    do
    {
        printf("\n===== DYNAMIC ARRAY OPERATIONS =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Update Element\n");
        printf("5. Linear Search\n");
        printf("6. Sort Array\n");
        printf("7. Binary Search\n");
        printf("8. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayArray();
                break;

            case 2:
                insertElement();
                break;

            case 3:
                deleteElement();
                break;

            case 4:
                updateElement();
                break;

            case 5:
                linearSearch();
                break;

            case 6:
                sortArray();
                break;

            case 7:
                binarySearch();
                break;

            case 8:
                printf("Program Exited.\n");
                free(arr);
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 8);

    return 0;
}

void createArray()
{
    int i;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d Elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void displayArray()
{
    int i;

    if(n == 0)
    {
        printf("Array is Empty.\n");
        return;
    }

    printf("Array Elements: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void insertElement()
{
    int pos, value, i;

    printf("Enter Position (1-%d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter Value: ");
    scanf("%d", &value);

    arr = (int *)realloc(arr, (n + 1) * sizeof(int));

    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    printf("Element Inserted Successfully.\n");
}

void deleteElement()
{
    int pos, i;

    printf("Enter Position to Delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    arr = (int *)realloc(arr, n * sizeof(int));

    printf("Element Deleted Successfully.\n");
}

void updateElement()
{
    int pos, value;

    printf("Enter Position to Update: ");
    scanf("%d", &pos);

    printf("Enter New Value: ");
    scanf("%d", &value);

    arr[pos - 1] = value;

    printf("Element Updated Successfully.\n");
}

void linearSearch()
{
    int key, i;

    printf("Enter Element to Search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element Found at Position %d\n", i + 1);
            return;
        }
    }

    printf("Element Not Found.\n");
}

void sortArray()
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array Sorted Successfully.\n");
}

void binarySearch()
{
    int key;
    int low = 0, high = n - 1, mid;

    printf("Enter Element to Search: ");
    scanf("%d", &key);

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("Element Found at Position %d\n", mid + 1);
            return;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Element Not Found.\n");
}