# Contact Book (C)

This project is a simple console-based **Contact Book** written in C. It allows users to manage contacts by storing names and phone numbers, with functionality to add, display, search, and delete contacts. The program demonstrates foundational C programming concepts including arrays, recursion, string handling using `strcmp` and `strcpy`, and menu-driven programming.

## Overview

The contact book provides an interactive command-line interface where the user can:
- Add new contacts with name and phone number.
- Display all stored contacts in a numbered list.
- Search for a contact by name using recursive search.
- Delete a contact by name.
- Exit the program.

The program continues running inside a `while` loop until the user chooses to exit.

## Features

- **Add Contacts** – Store names and phone numbers with automatic count management.
- **Display All Contacts** – View all stored contacts in a formatted list.
- **Search Contacts** – Find a specific contact by name using recursive binary search implementation.
- **Delete Contacts** – Remove a contact by name and reorganize the contact list.
- **Maximum Storage** – Support up to 100 contacts with overflow protection.
- **String Comparison** – Uses `strcmp` for reliable name matching.
- **Dynamic List Management** – Automatically shifts contacts when deleting to maintain order.
- **User-Friendly Menu** – Simple numbered menu for easy navigation.

## Code Structure

**ContactBook.c** – Contains the complete source code for the contact book program.

### Key Functions

- `addContact()` – Accepts user input and stores a new contact in the arrays.
- `display()` – Iterates through all contacts and prints them in formatted order.
- `searchContact()` – Accepts a name query and calls `searchName()` recursively.
- `searchName(int i, char *name)` – Recursive function that searches for a contact by comparing names.
- `deleteContact()` – Finds a contact and removes it, shifting remaining contacts.
- `main()` – Menu-driven loop that handles user choices and function calls.

## Compilation and Execution

### Requirements

- C compiler (e.g., GCC or Clang)
- Command-line or terminal access

### Steps

1. Open a terminal in the project directory.
2. Compile the program:
   ```
   gcc ContactBook.c -o ContactBook
   ```
3. Run the executable:
   ```
   ./ContactBook
   ```

## Example Output

```
1.Add 2.Display 3.Search 4.Delete 5.Exit
Choice: 1
Name: Alice
Phone: 9876543210
Added!

1.Add 2.Display 3.Search 4.Delete 5.Exit
Choice: 1
Name: Bob
Phone: 8765432109
Added!

1.Add 2.Display 3.Search 4.Delete 5.Exit
Choice: 1
Name: Charlie
Phone: 7654321098
Added!

1.Add 2.Display 3.Search 4.Delete 5.Exit
Choice: 2
1. Alice - 9876543210
2. Bob - 8765432109
3. Charlie - 7654321098

1.Add 2.Display 3.Search 4.Delete 5.Exit
Choice: 3
Enter name: Bob
Found: Bob - 8765432109

1.Add 2.Display 3.Search 4.Delete 5.Exit
Choice: 4
Enter name to delete: Charlie
Deleted!

1.Add 2.Display 3.Search 4.Delete 5.Exit
Choice: 2
1. Alice - 9876543210
2. Bob - 8765432109

1.Add 2.Display 3.Search 4.Delete 5.Exit
Choice: 5
```

## Concepts Used

- **stdio.h** for input/output operations (`printf`, `scanf`)
- **string.h** for string operations (`strcmp` for comparison, `strcpy` for copying)
- **while loop** for program control and menu iteration
- **if-else statements** for menu choice handling and error checking
- **char arrays** for storing names and phone numbers
- **2D arrays** (`names[MAX][50]` and `phones[MAX][15]`) for managing multiple contacts
- **Recursion** in `searchName()` function for searching through contacts
- **Global variables** (`names`, `phones`, `count`) for data persistence across function calls
- **Function modularity** with separate functions for each operation
- **Buffer management** with appropriate array sizes

## Limitations and Considerations

- **Fixed Array Size** – Maximum 100 contacts cannot be exceeded without recompilation.
- **No Data Persistence** – Contacts are lost when the program exits (not saved to a file).
- **Simple String Storage** – No input validation for phone number format or name length.
- **No Update Feature** – Users cannot modify existing contacts; they must delete and re-add.
- **Linear Search** – While implemented recursively, the search is still O(n) complexity.

## Potential Enhancements

- Add file I/O to save and load contacts from a file.
- Implement input validation for phone numbers (e.g., length check, digit validation).
- Add an update/edit contact feature.
- Implement sorting by name or phone number.
- Use dynamic memory allocation instead of fixed arrays for flexibility.
- Add duplicate contact prevention checks.
