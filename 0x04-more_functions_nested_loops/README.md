# 0x04. C - More functions, more nested loops

This repository contains the solutions to the "0x04. C - More functions, more nested loops" project. In this project, we explore nested loops, functions, prototypes, variable scope, gcc flags, header files, and more.

## Learning Objectives

- Understand the concept of nested loops and how to use them effectively.
- Gain knowledge about functions and their usage in C programming.
- Differentiate between the declaration and definition of a function.
- Understand the concept of prototypes and their importance.
- Learn about the scope of variables and how it affects their accessibility.
- Familiarize yourself with the gcc flags: -Wall, -Werror, -pedantic, -Wextra, -std=gnu89.
- Understand the purpose of header files and how to include them using the #include directive.

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the following flags: -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A README.md file, at the root of the project folder, is mandatory
- The code should follow the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Global variables are not allowed
- Each file should contain no more than 5 functions
- The standard library functions, such as printf, puts, etc., are forbidden
- The function _putchar is allowed
- The file _putchar.c should not be pushed to the repository
- The prototypes of all functions, including _putchar, should be included in the header file main.h
- Don't forget to push your header file

## Tasks

### 0. isupper

- Write a function that checks if a character is uppercase.
- Prototype: `int _isupper(int c);`
- Returns 1 if the character is uppercase, 0 otherwise.
- The standard library provides a similar function called `isupper`. You can run `man isupper` to learn more.

### 1. isdigit

- Write a function that checks if a character is a digit (0 through 9).
- Prototype: `int _isdigit(int c);`
- Returns 1 if the character is a digit, 0 otherwise.
- The standard library provides a similar function called `isdigit`. You can run `man isdigit` to learn more.

### 2. Collaboration is multiplication

- Write a function that multiplies two integers.
- Prototype: `int mul(int a, int b);`

### 3. The numbers speak for themselves

- Write a function that prints the numbers from 0 to 9, followed by a new line.
- Prototype: `void print_numbers(void);`
- You can only use the `_putchar` function twice in your code.

### 4. I believe in numbers and signs

- Write a function that prints the numbers from 0 to 9, followed by a new line.
- Prototype: `void print_most_numbers(void);`
- Do not print 2 and 4.
- You can only use the `_putchar` function twice in your code.

### 5. Numbers constitute the only universal language

- Write a function that prints the numbers from 0 to 14, ten times, followed by a new line.
- Prototype: `void more_numbers(void);`
- You can only use the `_putchar` function three times in your code.

### 6. The shortest distance between two points is a straight line

- Write a function that draws a straight line in the terminal.
- Prototype: `void print_line(int n);`
- You can only use the `_putchar` function to print.
- The character `_` should be printed `n` times.
- The line should end with a newline character (`\n`).
- If `n` is 0 or less, the function should only print a newline character.

### 7. I feel like I am diagonally parked in a parallel universe

- Write a function that draws a diagonal line in the terminal.
- Prototype: `void print_diagonal(int n);`
- You can only use the `_putchar` function to print.
- The character `\` should be printed `n` times.
- The diagonal should end with a newline character (`\n`).
- If `n` is 0 or less, the function should only print a newline character.

### 8. You are so much sunshine in every square inch

- Write a function that prints a square, followed by a new line.
- Prototype: `void print_square(int size);`
- You can only use the `_putchar` function to print.
- The character `#` should be used to print the square.
- The size of the square is determined by the `size` parameter.
- If `size` is 0 or less, the function should only print a newline character.

### 9. Fizz-Buzz

- Write a program that prints the numbers from 1 to 100, followed by a new line.
- For multiples of three, print "Fizz" instead of the number.
- For multiples of five, print "Buzz" instead of the number.
- For numbers which are multiples of both three and five, print "FizzBuzz".
- Each number or word should be separated by a space.
- You are allowed to use the standard library.

### 10. Triangles

- Write a function that prints a triangle, followed by a new line.
- Prototype: `void print_triangle(int size);`
- You can only use the `_putchar` function to print.
- The character `#` should be used to print the triangle.
- The size of the triangle is determined by the `size` parameter.
- If `size` is 0 or less, the function should only print a newline character.

### 11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic

- Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
- You are allowed to use the standard library.
- Your program will be compiled with the following command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm`

### 12. Numbers have life; they're not just symbols on paper

- Write a function that prints an integer.
- Prototype: `void print_number(int n);`
- You can only use the `_putchar` function to print.
- You are not allowed to use long, arrays, pointers, or hard-coded special values.

Feel free to explore the repository for the solutions to each task.
