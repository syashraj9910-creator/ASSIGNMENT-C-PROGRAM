# Assignment-05: Dynamic Array Management

## Objective

To understand Dynamic Memory Allocation in C using `malloc()` and `free()` by creating a menu-driven program for storing and managing student marks.

---

## Problem Statement

Develop a menu-driven application that dynamically allocates memory to store the marks of N students. The program should perform the following operations:

- Store student marks using `malloc()`
- Display all marks
- Find the highest marks
- Find the lowest marks
- Calculate the average marks
- Release allocated memory using `free()`

---

## Concepts Covered

- Dynamic Memory Allocation
- Pointers
- Arrays
- Functions
- Loops

---

## Algorithm

1. Start the program.
2. Input the number of students.
3. Allocate memory using `malloc()`.
4. Enter the marks of all students.
5. Display the menu.
6. Perform the selected operation:
   - Display Marks
   - Highest Marks
   - Lowest Marks
   - Average Marks
   - Free Allocated Memory
7. Repeat until the user selects Exit.
8. End the program.

---

## Time Complexity

| Operation | Complexity |
|-----------|------------|
| Display Marks | O(n) |
| Highest Marks | O(n) |
| Lowest Marks | O(n) |
| Average Marks | O(n) |
| Memory Allocation | O(1) |
| Free Memory | O(1) |

---

## Space Complexity

**O(n)**

where **n** is the number of students.

---

## Sample Input

```
Enter number of students: 5

Marks:
80
75
90
60
85
```

---

## Sample Output

```
Student Marks:
80 75 90 60 85

Highest Marks = 90

Lowest Marks = 60

Average Marks = 78.00

Memory Released Successfully.
```

---

## Learning Outcome

- Learned Dynamic Memory Allocation using `malloc()`.
- Understood the use of pointers with arrays.
- Implemented menu-driven programming.
- Calculated statistical operations on dynamically allocated arrays.
- Learned to release memory using `free()` to prevent memory leaks.

---

## Files Included

- `main.c`
- `README.md`
- `output.png`
