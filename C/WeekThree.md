# Student Management System (C)

## Overview

A simple console-based Student Management System written in C. This project manages student records using a singly linked list, allowing dynamic insertion, deletion, searching, and class-wise display of data.

The program provides a menu-driven command-line interface where the user can:

- Add a new student record
- Delete a student using their ID
- Search for a student by ID
- Display all students belonging to a specific class
- Exit the application

All student records are stored dynamically in memory.

---

## Features

- **Add student details**: ID, name, age, gender, class
- **Delete student records**: Remove records by unique ID
- **Search and display**: Retrieve individual student details
- **Display students class-wise**: Filter and view students by class
- **Dynamic memory handling**: Uses linked lists for efficient memory management
- **Simple and efficient console interaction**: User-friendly menu-driven interface

---

## Code Structure

`StudentManagement.c` includes:

- **struct Student**: Data structure for storing student information
- **Linked list operations**: Functions for add, delete, search, and traverse operations
- **Menu-driven main() function**: Interactive command-line interface
- **Memory management**: Dynamic allocation and deallocation using malloc and free

---

## Compilation and Execution

### Requirements

- C compiler (GCC or Clang)
- Terminal or command prompt

### Steps

1. Open a terminal in the project directory
2. Compile the program:
   ```bash
   gcc StudentManagement.c -o StudentManagement
   ```
3. Run the program:
   ```bash
   ./StudentManagement
   ```

---

## Example Output

### Adding a Student

```
1.Add 2.Del 3.Src 4.Cls 5.Exit
: 1
ID: 101
Name: Mallikarjun
Age: 18
Gender: Male
Class: 12
> Added.
```

### Searching for a Student

```
1.Add 2.Del 3.Src 4.Cls 5.Exit
: 3
ID to search: 101
[101] Mallikarjun | 18 | Male | Cls: 12
```

### Displaying Students by Class

```
1.Add 2.Del 3.Src 4.Cls 5.Exit
: 4
Class: 12
[101] Mallikarjun | 18yrs | Male
```

---

## Concepts Used

- **Structures (struct)**: Data organization and encapsulation
- **Singly linked lists**: Dynamic storage and efficient memory usage
- **Dynamic memory allocation**: malloc and free for runtime memory management
- **Pointers**: Traversal, manipulation, and linking of nodes
- **Menu-driven programming**: Loops for continuous user interaction
- **Conditional logic**: if-else statements for decision-making
- **Standard libraries**: 
  - `stdio.h` for input/output operations
  - `stdlib.h` for memory allocation and general utilities
  - `string.h` for string manipulation

---

## How It Works

### Data Structure

The system uses a singly linked list where each node contains:
- Student ID (unique identifier)
- Name
- Age
- Gender
- Class

### Operations

**Add Operation**: Creates a new student node and inserts it into the linked list.

**Delete Operation**: Searches for the student by ID and removes the node from the linked list, freeing allocated memory.

**Search Operation**: Traverses the linked list to find and display a specific student's details by ID.

**Class-wise Display**: Traverses the entire linked list and displays only students belonging to the requested class.

**Exit**: Gracefully closes the application and frees all allocated memory.

---

## Benefits of This Approach

- **Dynamic memory management**: Only uses memory for active student records
- **Flexible operations**: Easy to add, remove, or search records without reorganizing data
- **Scalability**: Can handle any number of students without predefined array size limits
- **Educational value**: Demonstrates fundamental data structures and memory management concepts in C

---

## Possible Enhancements

- File I/O to persist student records
- Sorting functionality (by ID, name, or class)
- Update student information feature
- Search by name or class range
- Data validation for input fields
- Multi-level data organization (school, division, class)
- Graphical user interface (GUI) using libraries like GTK or Qt

---

## Notes

- The system assumes unique student IDs
- All operations are performed in-memory; data is lost when the program exits
- The console interface is case-sensitive for certain inputs
- Error handling can be enhanced for robustness in production environments
