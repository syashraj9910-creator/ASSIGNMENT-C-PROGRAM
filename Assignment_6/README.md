# Assignment-06: File Handling System

## Objective

To understand file handling in C by creating a menu-driven program to store and manage student records using files.

---

## Problem Statement

Develop a menu-driven application to perform file operations on student records. The program should:

- Add student records to a file
- Display all student records
- Append new student records
- Search a student by Roll Number
- Count the total number of records stored in the file

---

## Concepts Covered

- File Handling
- Structures
- Functions
- Arrays
- Loops

---

## Algorithm

1. Start the program.
2. Display the main menu.
3. Read the user's choice.
4. Perform the selected operation:
   - Add a student record.
   - Display all records.
   - Append a new record.
   - Search a record by Roll Number.
   - Count total records.
5. Repeat until the user selects Exit.
6. Close the file and terminate the program.

---

## Time Complexity

| Operation | Complexity |
|-----------|------------|
| Add Record | O(1) |
| Display Records | O(n) |
| Append Record | O(1) |
| Search Record | O(n) |
| Count Records | O(n) |

---

## Space Complexity

**O(1)**

(Only one student record is processed at a time.)

---

## Sample Input

```
Enter Choice: 1

Enter Roll Number: 101
Enter Name: Yash
Enter Marks: 92
```

---

## Sample Output

```
Record Saved Successfully.

Student Records

Roll : 101
Name : Yash
Marks: 92.00

Total Records = 1
```

---

## Learning Outcome

- Learned file handling using `fopen()`, `fclose()`, `fwrite()`, and `fread()`.
- Understood how to store data permanently in files.
- Implemented searching and counting records.
- Used structures with file operations.
- Developed a menu-driven application using functions.

---

## Files Included

- `main.c`
- `README.md`
- `student.txt`
- `output.png`