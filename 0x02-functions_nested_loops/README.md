# Project: 0x02. C - Functions, nested loops

This project focuses on learning and implementing various concepts in C programming, including nested loops and functions. The project consists of several tasks, each with its own requirements and objectives. In this README.md file, I will provide an overview of the project, explain the learning objectives, list the requirements, and describe each task in detail.

## Learning Objectives

The main learning objectives of this project are as follows:

1. Understand the concept of nested loops and learn how to use them effectively.
2. Gain knowledge about functions and their usage in C programming.
3. Differentiate between the declaration and definition of a function.
4. Understand the concept of a prototype and its significance.
5. Learn about the scope of variables in C programming.
6. Familiarize yourself with the gcc flags `-Wall -Werror -pedantic -Wextra -std=gnu89` and their usage.
7. Understand the purpose of header files and learn how to include them using `#include`.

## Requirements

To work on this project, you need to have the following:

- An editor such as vi, vim, or emacs.
- Ubuntu 20.04 LTS operating system.
- gcc compiler with the following flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All files should end with a new line.
- A README.md file at the root of the project folder is mandatory.
- The code should follow the Betty style, which will be checked using `betty-style.pl` and `betty-doc.pl`.
- Global variables are not allowed.
- Each file should contain no more than 5 functions.
- The standard library functions like `printf`, `puts`, etc., are forbidden, except for `_putchar`.
- The `_putchar.c` file should not be pushed to the repository.

Now, let's dive into the details of each task:

## Task 0: _putchar

- File: `0-putchar.c`
- Prototype: `int _putchar(char c)`

In this task, you need to write a program that prints `_putchar`, followed by a new line. The program should return 0.

## Task 1: Alphabet

- File: `1-alphabet.c`
- Prototype: `void print_alphabet(void)`

In this task, you need to write a function that prints the alphabet in lowercase, followed by a new line. You can only use the `_putchar` function twice in your code.

## Task 2: 10 x Alphabet

- File: `2-print_alphabet_x10.c`
- Prototype: `void print_alphabet_x10(void)`

In this task, you need to write a function that prints the alphabet in lowercase 10 times, followed by a new line. You can only use the `_putchar` function twice in your code.

## Task 3: islower

- File: `3-islower.c`
- Prototype: `int _islower(int c)`

In this task, you need to write a function that checks whether a character is lowercase. The function should return 1 if the character is lowercase and 0 otherwise. You are not allowed to use the standard library function `islower`.

## Task 4: isalpha

- File: `4-isalpha.c`
- Prototype: `int _isalpha(int c)`

In this task, you need to write a function that checks whether a character is alphabetic. The function should return 1 if the character is a letter (lowercase or uppercase) and 0 otherwise. You are not allowed to use the standard library function `isalpha`.

## Task 5: Sign

- File: `5-sign.c`
- Prototype: `int print_sign(int n)`

In this task, you need to write a function that prints the sign of a number. The function should return 1 and print `+` if the number is greater than zero, return 0 and print `0` if the number is zero, and return -1 and print `-` if the number is less than zero.

## Task 6: Absolute Value

- File: `6-abs.c`
- Prototype: `int _abs(int n)`

In this task, you need to write a function that computes the absolute value of an integer. The function should return the absolute value of the given integer.

## Task 7: Last Digit

- File: `7-print_last_digit.c`
- Prototype: `int print_last_digit(int n)`

In this task, you need to write a function that prints the last digit of a number. The function should return the value of the last digit.

## Task 8: Jack Bauer

- File: `8-24_hours.c`
- Prototype: `void jack_bauer(void)`

In this task, you need to write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59. The time should be printed in the format `HH:MM`.

## Task 9: Times Table

- File: `9-times_table.c`
- Prototype: `void times_table(void)`

In this task, you need to write a function that prints the 9 times table, starting from 0. The output should be formatted as shown in the example.

## Task 10: Add

- File: `10-add.c`
- Prototype: `int add(int a, int b)`

In this task, you need to write a function that adds two integers and returns the result.

## Task 11: Print to 98

- File: `11-print_to_98.c`
- Prototype: `void print_to_98(int n)`

In this task, you need to write a function that prints all natural numbers from a given number `n` up to 98, followed by a new line. The numbers should be separated by a comma and a space. The first printed number should be the number passed to your function, and the last printed number should be 98.

## Task 12: Print the Fibonacci sequence

- File: `12-fibonacci.c`
- Prototype: `void print_fibonacci(void)`

In this task, you need to write a function that prints the Fibonacci sequence up to a certain limit. The function should start with 0 and 1, and each subsequent number should be the sum of the previous two numbers. The sequence should be printed in a comma-separated format.

## Task 13: Find and print the largest prime factor

- File: `13-largest_prime_factor.c`
- Prototype: `void print_largest_prime_factor(long n)`

In this task, you need to write a function that finds and prints the largest prime factor of a given number `n`. The function should iterate from 2 to the square root of `n` and check if each number is a factor of `n`. If a factor is found, it should be checked if it is a prime number. The largest prime factor should be printed.

## Task 14: Print a square

- File: `14-print_square.c`
- Prototype: `void print_square(int size)`

In this task, you need to write a function that prints a square of a given size using the `#` character. The size represents the number of rows and columns in the square. The function should print the square using nested loops.

## Task 15: Print a triangle

- File: `15-print_triangle.c`
- Prototype: `void print_triangle(int size)`

In this task, you need to write a function that prints a triangle of a given size using the `#` character. The size represents the number of rows in the triangle. The function should print the triangle using nested loops.

That's it! These are the tasks included in the 0x02. C - Functions, nested loops project. Each task has its own file and prototype, and you need to implement the required functionality according to the given specifications.

Remember to follow the requirements mentioned earlier, such as using the correct file names, including the necessary prototypes in the header file `main.h`, and adhering to the coding style guidelines.

Feel free to explore the project directory in the GitHub repository `alx-low_level_programming` for more details and to access the files associated with each task.
