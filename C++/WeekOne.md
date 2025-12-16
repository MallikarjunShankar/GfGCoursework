# Temperature Converter (C++)

This project is part of my GeeksForGeeks C++ coursework. It is a simple console-based **Temperature Converter** that allows users to convert between Celsius and Fahrenheit. The program demonstrates fundamental C++ concepts such as conditional statements, loops, and user input handling.

---

## Overview

The program provides a menu-driven interface with three options:
1. Convert **Celsius to Fahrenheit**
2. Convert **Fahrenheit to Celsius**
3. **Exit** the program

The user enters a choice, inputs a temperature, and receives the converted value. The menu repeats until the user chooses to exit.

---

## Features

- Converts temperatures in both directions (Celsius ↔ Fahrenheit)
- Input validation for incorrect menu options
- Uses a `do-while` loop to allow repeated conversions
- Demonstrates the use of conditional (`if-else`) logic

---

## Code Structure

- `WeekOne.cpp`: Contains the complete source code for the temperature converter.

---

## Compilation and Execution

### Requirements
- C++ compiler (e.g., GCC, Clang, or MSVC)
- Command-line or terminal access

### Steps
1. Open a terminal in the project directory.  
2. Compile the program:
g++ WeekOne.cpp -o TemperatureConverter
3. Run the executable:
./TemperatureConverter

---

## Example Output

Temperature Converter

1. Celsius to Fahrenheit

2. Fahrenheit to Celsius

3. Exit

Enter your choice (1-3): 1

Enter the temperature in Celsius: 25

Temperature in Fahrenheit: 77

---

## Concepts Used

- `iostream` for input/output
- `if-else` and `do-while` for control flow
- Basic arithmetic operations for conversion formulas:
  - Fahrenheit = (Celsius × 1.8) + 32
  - Celsius = (Fahrenheit − 32) × 0.55556
