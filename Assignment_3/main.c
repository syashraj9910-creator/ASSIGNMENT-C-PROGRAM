#include <stdio.h>

void displayPointer();
void dereferencePointer();
void swapNumbers();
void traverseArray();
void pointerArithmetic();

int main()
{
    int choice;

    do
    {
        printf("\n===== POINTER PLAYGROUND =====\n");
        printf("1. Display Memory Address and Value\n");
        printf("2. Dereference Pointer\n");
        printf("3. Swap Two Numbers Using Pointers\n");
        printf("4. Traverse Array Using Pointer\n");
        printf("5. Pointer Arithmetic\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayPointer();
                break;

            case 2:
                dereferencePointer();
                break;

            case 3:
                swapNumbers();
                break;

            case 4:
                traverseArray();
                break;

            case 5:
                pointerArithmetic();
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

void displayPointer()
{
    int num;
    int *ptr;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    ptr = &num;

    printf("Value = %d\n", num);
    printf("Memory Address = %p\n", (void *)ptr);
}

void dereferencePointer()
{
    int num;
    int *ptr;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    ptr = &num;

    printf("Pointer Address = %p\n", (void *)ptr);
    printf("Dereferenced Value = %d\n", *ptr);
}

void swapNumbers()
{
    int a, b;
    int *p1, *p2, temp;

    printf("\nEnter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    p1 = &a;
    p2 = &b;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After Swapping:\n");
    printf("First Number = %d\n", a);
    printf("Second Number = %d\n", b);
}

void traverseArray()
{
    int arr[100], n;
    int *ptr;
    int i;

    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("Array Elements using Pointer:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n");
}

void pointerArithmetic()
{
    int arr[5] = {10,20,30,40,50};
    int *ptr;
    int i;

    ptr = arr;

    printf("\nPointer Arithmetic:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Address = %p  Value = %d\n",
               (void *)(ptr + i),
               *(ptr + i));
    }
}