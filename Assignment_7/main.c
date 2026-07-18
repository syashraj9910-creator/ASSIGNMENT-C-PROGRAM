#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, gross, tax, net;
};

struct Employee emp[100];
int n = 0;

void addEmployee();
void displayEmployee();
void calculateSalary();
void searchEmployee();

int main()
{
    int choice;

    do
    {
        printf("\n===== EMPLOYEE PAYROLL SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Calculate Salary\n");
        printf("4. Search Employee\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployee();
                break;

            case 3:
                calculateSalary();
                break;

            case 4:
                searchEmployee();
                break;

            case 5:
                printf("Program Exited.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(choice!=5);

    return 0;
}

void addEmployee()
{
    printf("\nEnter Employee ID: ");
    scanf("%d",&emp[n].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]",emp[n].name);

    printf("Enter Basic Salary: ");
    scanf("%f",&emp[n].basic);

    n++;

    printf("Employee Added Successfully!\n");
}

void calculateSalary()
{
    int i;

    if(n==0)
    {
        printf("No Employee Records.\n");
        return;
    }

    for(i=0;i<n;i++)
    {
        emp[i].hra = emp[i].basic * 0.20;
        emp[i].da = emp[i].basic * 0.10;
        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
        emp[i].tax = emp[i].gross * 0.05;
        emp[i].net = emp[i].gross - emp[i].tax;
    }

    printf("Salary Calculated Successfully.\n");
}

void displayEmployee()
{
    int i;

    if(n==0)
    {
        printf("No Employee Records.\n");
        return;
    }

    printf("\n------ Employee Details ------\n");

    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("ID           : %d\n",emp[i].id);
        printf("Name         : %s\n",emp[i].name);
        printf("Basic Salary : %.2f\n",emp[i].basic);
        printf("HRA          : %.2f\n",emp[i].hra);
        printf("DA           : %.2f\n",emp[i].da);
        printf("Gross Salary : %.2f\n",emp[i].gross);
        printf("Tax          : %.2f\n",emp[i].tax);
        printf("Net Salary   : %.2f\n",emp[i].net);
    }
}

void searchEmployee()
{
    int id,i,found=0;

    printf("Enter Employee ID: ");
    scanf("%d",&id);

    for(i=0;i<n;i++)
    {
        if(emp[i].id==id)
        {
            printf("\nEmployee Found\n");
            printf("ID         : %d\n",emp[i].id);
            printf("Name       : %s\n",emp[i].name);
            printf("Net Salary : %.2f\n",emp[i].net);

            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("Employee Not Found.\n");
    }
}