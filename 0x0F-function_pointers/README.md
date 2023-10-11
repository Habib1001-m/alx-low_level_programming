# 0x0F. C - Function Pointers

This project explores the concept of function pointers in C. Function pointers allow you to work with functions as data, enabling dynamic function invocation. The tasks in this project aim to solidify your understanding of function pointers and their applications.

## Learning Objectives

Upon completing this project, you will be able to:

- Explain what function pointers are and how to use them.
- Understand what a function pointer exactly holds.
- Know where a function pointer points to in the virtual memory.

## Requirements

Before we dive into the project tasks, let's clarify the requirements for this project:

- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with the options: -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line.
- A README.md file at the root of the project directory is mandatory.
- Your code should adhere to the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
- Avoid using global variables.
- Each file should contain no more than 5 functions.
- Only the C standard library functions malloc, free, and exit are allowed. Avoid functions like printf, puts, calloc, realloc, etc.
- You can use the provided _putchar function.
- Do not include the _putchar.c file; it will be provided by the evaluation system.
- Your function prototypes and the prototype of the function _putchar should be included in your header file called function_pointers.h.
- Don't forget to push your header file.
- All header files should be include guarded.

## Project Tasks

### Task 0: What's my name

Create a function that prints a name.

```c
Prototype: void print_name(char *name, void (*f)(char *));
```

### Task 1: If you spend too much time thinking about a thing, you'll never get it done

Write a function that executes a function given as a parameter on each element of an array.

```c
Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
```

### Task 2: To hell with circumstances; I create opportunities

Create a function that searches for an integer.

```c
Prototype: int int_index(int *array, int size, int (*cmp)(int));
```

### Task 3: A goal is not always meant to be reached, it often serves simply as something to aim at

Write a program that performs simple operations. This program accepts input arguments as integers and an operator.

Usage: `calc num1 operator num2`

Operators:

- `+` for addition
- `-` for subtraction
- `*` for multiplication
- `/` for division
- `%` for modulo

The program prints the result of the operation and a new line.

If the number of arguments is wrong, it prints "Error" and exits with status 98. If the operator is not recognized, it prints "Error" and exits with status 99. If division or modulo by zero is attempted, it prints "Error" and exits with status 100.

This task involves creating four different files:

- `3-calc.h`: Contains function prototypes and a data structure for operations.
- `3-op_functions.c`: Contains five functions for each operation.
- `3-get_op_func.c`: Contains the function that selects the correct operation function.
- `3-main.c`: Contains the main function.

### Task 4: Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker

Write a program that prints the opcodes of its own main function. This program takes the number of bytes as an argument and prints the opcodes in hexadecimal.

Usage: `./main number_of_bytes`

If the number of arguments is incorrect, it prints "Error" and exits with status 1. If the number of bytes is negative, it prints "Error" and exits with status 2.

## Example Compilation and Execution

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
./calc 1 + 1
# Output: 2
```
