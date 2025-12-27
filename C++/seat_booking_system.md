# Seat Booking System (C++)

This project is a console-based **Seat Booking System** that allows users to book and cancel seats in an 8×8 theater or cinema hall. The program demonstrates fundamental C++ concepts such as 2D arrays, conditional statements, loops, and menu-driven user interfaces.

---

## Overview

The program provides a menu-driven interface with five options:
1. **View Seats** - Display the current seat layout (0 = available, 1 = booked)
2. **Book Seat** - Book a single seat by row and column
3. **Book Multiple Seats** - Book consecutive seats in a row
4. **Cancel Seat** - Cancel a booking and free up a seat
5. **Exit** - Close the program

The user enters a choice, performs the desired action, and the menu repeats until the user chooses to exit.

---

## Features

- Displays an 8×8 seat grid with availability status
- Books individual seats with validation
- Books multiple consecutive seats in a single row
- Cancels existing bookings
- Menu-driven interface with `do-while` loop
- Input handling for menu choices and seat coordinates

---

## Code Structure

- `SeatBookingSystem.cpp`: Contains the complete source code for the seat booking system

### Functions

- `viewSeats()`: Displays the current state of all seats
- `bookSingleSeat(int row, int col)`: Books a single seat at specified row and column
- `bookSeats(int row, int colStart, int colEnd)`: Books multiple consecutive seats in a row
- `cancelSeat(int row, int col)`: Cancels a booking and marks the seat as available
- `main()`: Contains the menu loop and user interaction logic

---

## Compilation and Execution

### Requirements
- C++ compiler (e.g., GCC, Clang, or MSVC)
- Command-line or terminal access

### Steps
1. Open a terminal in the project directory
2. Compile the program:
```bash
g++ SeatBookingSystem.cpp -o SeatBookingSystem
```
3. Run the executable:
```bash
./SeatBookingSystem
```

---

## Example Output

```
Menu:

1. View Seats
2. Book Seat
3. Book Multiple Seats
4. Cancel Seat
5. Exit

Enter your choice: 1
Seat Layout (0 = available, 1 = booked):
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0

Enter your choice: 2
Enter row and column to book seat: 2 3
Seat booked successfully.

Enter your choice: 3
Enter row, start column and end column to book seats: 4 1 5
Seats booked successfully from 1 to 5 in row 4.

Enter your choice: 4
Enter row and column to cancel seat: 2 3
Seat cancellation successful.

Enter your choice: 5
Exiting...
```

---

## Concepts Used

- `iostream` for input/output operations
- **2D Arrays** (`int arr[8][8]`) for storing seat data
- **Conditional statements** (`if-else`) for validation and state checking
- **Loops** (`for` and `do-while`) for iteration and menu repetition
- **Functions** for modular code organization
- **Menu-driven interface** for user interaction
- Conversion of seat states: 0 (available) → 1 (booked)

---

## Known Issues and Limitations

### Current Issues

1. **No Bounds Checking**: The program does not validate that user input indices are within 0–7, which can cause undefined behavior if out-of-bounds indices are accessed

2. **No Input Validation**: Non-integer inputs for menu choices or seat coordinates are not handled, which can cause program failure or infinite loops

3. **Multiple Seat Booking Edge Cases**: In `bookSeats()`, there is no validation that `colStart <= colEnd` or that both are within valid bounds

### Recommended Improvements

Add an index validation function:
```cpp
bool isValidIndex(int row, int col) {
    return row >= 0 && row < 8 && col >= 0 && col < 8;
}
```

Add input error handling:
```cpp
if (!isValidIndex(row, col)) {
    cout << "Invalid seat position. Please enter values between 0 and 7.\n";
    return;
}
```

Validate range in `bookSeats()`:
```cpp
if (row < 0 || row >= 8 || colStart < 0 || colEnd >= 8 || colStart > colEnd) {
    cout << "Invalid range.\n";
    return;
}
```

---

## Conversion Formulas and Logic

- **Seat State**: 0 = available, 1 = booked
- **Booking**: Change seat value from 0 to 1
- **Cancellation**: Change seat value from 1 to 0

---

## Future Enhancements

- Add persistent storage (file I/O) to save bookings between sessions
- Implement a user authentication system
- Add pricing and payment processing
- Display seat layout with row/column labels for better readability
- Implement seat selection by price category (economy, premium, VIP)
- Add booking history and receipt generation
- Implement concurrent bookings with thread safety
