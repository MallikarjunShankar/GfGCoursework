# Basic Calculator (C)
[](https://github.com/MallikarjunShankar/GfGCoursework/blob/main/C/Calculator.md#basic-calculator-c)

This project is a simple console-based **Basic Calculator** written in C. It allows users to perform fundamental arithmetic operations such as sum, difference, product, and quotient. The program demonstrates foundational C programming concepts including conditional statements, loops, and string handling using `strcmp`.

## Overview
[](https://github.com/MallikarjunShankar/GfGCoursework/blob/main/C/Calculator.md#overview)

The calculator provides an interactive command-line interface where the user can:
- Enter two numbers.
- Choose an operation (`sum`, `difference`, `product`, or `quotient`).
- View the result immediately.
- Decide whether to perform another calculation or exit.

The program continues running inside a `while` loop until the user chooses to stop.

## Features
[](https://github.com/MallikarjunShankar/GfGCoursework/blob/main/C/Calculator.md#features)

- Performs **addition**, **subtraction**, **multiplication**, and **division**.  
- Prevents **division by zero** using conditional checks.  
- **String-based operation input** using `strcmp` for better readability.  
- Repeats calculations based on user choice (`y/n`).  
- Clean and user-friendly console interaction.

## Code Structure
[](https://github.com/MallikarjunShankar/GfGCoursework/blob/main/C/Calculator.md#code-structure)

**Calculator.c** – Contains the complete source code for the calculator program.

## Compilation and Execution
[](https://github.com/MallikarjunShankar/GfGCoursework/blob/main/C/Calculator.md#compilation-and-execution)

### Requirements
[](https://github.com/MallikarjunShankar/GfGCoursework/blob/main/C/Calculator.md#requirements)

- C compiler (e.g., GCC or Clang)  
- Command-line or terminal access

### Steps
[](https://github.com/MallikarjunShankar/GfGCoursework/blob/main/C/Calculator.md#steps)

1. Open a terminal in the project directory.  
2. Compile the program:  
   ```
   gcc Calculator.c -o Calculator
   ```
3. Run the executable:  
   ```
   ./Calculator
   ```

## Example Output
[](https://github.com/MallikarjunShankar/GfGCoursework/blob/main/C/Calculator.md#example-output)

```
Enter the first number:- 
12
Enter the second number:- 
4
Enter the operation (sum, difference, product, quotient):- 
quotient
Result: 3.00
Do you want to perform another calculation? (y/n):- 
y
Starting a new calculation...
Enter the first number:- 
15
Enter the second number:- 
3
Enter the operation (sum, difference, product, quotient):- 
product
Result: 45.00
Do you want to perform another calculation? (y/n):- 
n
Exiting...
Thank you for using the calculator.
```

## Concepts Used
[](https://github.com/MallikarjunShankar/GfGCoursework/blob/main/C/Calculator.md#concepts-used)

- **stdio.h** for input/output operations (`printf`, `scanf`)  
- **string.h** for string comparison using `strcmp`  
- **while loop** for program control until user exits  
- **if-else statements** for operation handling and error checking  
- **float data type** for decimal number handling  
- **Array** for storing operation strings  
- **Input buffer handling** with space before `%c` in `scanf`