# Assignment-07: Employee Payroll System

## Objective

To develop a menu-driven Employee Payroll System using structures in C. The program stores employee details and calculates Gross Salary and Net Salary.

---

## Problem Statement

Develop a menu-driven application to manage employee payroll. The program should perform the following operations:

- Add Employee Details
- Display Employee Records
- Calculate Gross Salary
- Calculate Net Salary
- Search Employee by Employee ID

---

## Concepts Covered

- Structures
- Arrays
- Functions
- Loops
- Conditional Statements

---

## Algorithm

1. Start the program.
2. Display the main menu.
3. Read the user's choice.
4. Perform the selected operation:
   - Add employee details.
   - Display all employee records.
   - Calculate Gross Salary and Net Salary.
   - Search employee by ID.
5. Repeat until the user selects Exit.
6. Stop the program.

---

## Salary Calculation

- HRA = 20% of Basic Salary
- DA = 10% of Basic Salary
- Gross Salary = Basic + HRA + DA
- Tax = 5% of Gross Salary
- Net Salary = Gross Salary − Tax

---

## Time Complexity

| Operation | Complexity |
|-----------|------------|
| Add Employee | O(1) |
| Display Employees | O(n) |
| Calculate Salary | O(n) |
| Search Employee | O(n) |

---

## Space Complexity

**O(n)**

where **n** is the number of employee records.

---

## Sample Input

```
Enter Choice: 1

Enter Employee ID: 101
Enter Employee Name: Yash
Enter Basic Salary: 50000
```

---

## Sample Output

```
Employee Added Successfully.

Gross Salary = 65000.00
Net Salary = 61750.00
```

---

## Learning Outcome

- Learned to use structures for storing employee records.
- Implemented payroll calculations using functions.
- Used arrays of structures.
- Developed a menu-driven application.
- Practiced searching records using Employee ID.

---

## Files Included

- `main.c`
- `README.md`
- `output.png`