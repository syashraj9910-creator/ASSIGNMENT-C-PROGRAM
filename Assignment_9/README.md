# Assignment-09: Dynamic Array Operations

## Objective

To implement various operations on a dynamically allocated array using Dynamic Memory Allocation in C. The program demonstrates insertion, deletion, updating, searching, sorting, and compares Linear Search with Binary Search.

---

## Problem Statement

Develop a menu-driven application to perform the following operations on a dynamic array:

- Display array elements
- Insert an element
- Delete an element
- Update an element
- Search an element using Linear Search
- Sort the array
- Search an element using Binary Search after sorting

---

## Concepts Covered

- Dynamic Memory Allocation (`malloc()`, `realloc()`, `free()`)
- Arrays
- Searching Algorithms
- Sorting Algorithms
- Functions
- Loops

---

## Algorithm

1. Start the program.
2. Input the number of elements.
3. Allocate memory dynamically using `malloc()`.
4. Display the menu.
5. Perform the selected operation:
   - Display array
   - Insert element
   - Delete element
   - Update element
   - Linear Search
   - Sort array
   - Binary Search
6. Repeat until the user selects Exit.
7. Free the allocated memory.
8. Stop the program.

---

## Time Complexity

| Operation | Complexity |
|-----------|------------|
| Display | O(n) |
| Insert | O(n) |
| Delete | O(n) |
| Update | O(1) |
| Linear Search | O(n) |
| Bubble Sort | O(n²) |
| Binary Search | O(log n) |

---

## Space Complexity

**O(n)**

where **n** is the number of elements in the dynamic array.

---

## Sample Input

```
Enter Number of Elements: 5

10
20
30
40
50
```

---

## Sample Output

```
Array Elements:
10 20 30 40 50

Element Inserted Successfully.

Array Sorted Successfully.

Element Found at Position 3
```

---

## Learning Outcome

- Learned Dynamic Memory Allocation using `malloc()`, `realloc()`, and `free()`.
- Implemented insertion, deletion, and update operations.
- Compared Linear Search and Binary Search.
- Understood the importance of sorting before Binary Search.
- Improved understanding of arrays and algorithm analysis.

---

## Files Included

- `main.c`
- `README.md`
- `output.png`