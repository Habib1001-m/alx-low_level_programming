# Project: 0x08. C - Recursion

This project focuses on the concept of recursion in the C programming language. Recursion is a powerful technique where a function calls itself to solve a problem by breaking it down into smaller subproblems. This project aims to improve your understanding of recursion, its implementation, and the situations where it is appropriate to use recursion.

## Learning Objectives

By the end of this project, you should be able to explain the following topics without any external help:

- What is recursion?
- How to implement recursion in C
- Situations where recursion should be implemented
- Situations where recursion should not be implemented

## Requirements

To work on this project, you need the following:

- Text editors: vi, vim, emacs (Choose the one you're most comfortable with)
- Your code should be compiled on Ubuntu 20.04 LTS using gcc with the following flags:
  - -Wall
  - -Werror
  - -Wextra
  - -pedantic
  - -std=gnu89
- All your code files must end with a new line
- Your project must include a README.md file at the root of the folder
- Your code files should use Betty style. They will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- Each code file should contain no more than 5 functions
- You are not permitted to use the standard library functions, such as `printf`, `puts`, etc.
- You can, however, use `_putchar`
- Do not include the `_putchar.c` file. We will use our own file for testing.
- Do not include the `main.c` file shown in the examples. We will use our own `main.c` files for testing.
- The prototypes of all your functions, including the `_putchar` function, should be included in a header file called `main.h`
- Do not forget to push your `main.h` file
- You are not allowed to use any kind of loops
- Static variables are also not allowed

## Tasks

This project consists of the following tasks:

### Task 0: She locked away a secret, deep inside herself, something she once knew to be true...but chose to forget

In this task, you need to write a function called `_puts_recursion` that takes a string as a parameter and prints it, followed by a new line. This function should use recursion to print each character in the string. The prototype of the function is as follows:

```c
void _puts_recursion(char *s);
```

### Task 1: Why is it so important to dream? Because, in my dreams we are together

In this task, you need to write a function called `_print_rev_recursion` that prints a string in reverse. The prototype of the function is as follows:

```c
void _print_rev_recursion(char *s);
```

### Task 2: Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange

In this task, you need to write a function called `_strlen_recursion` that returns the length of a string. You should implement this function using recursion. The prototype of the function is as follows:

```c
int _strlen_recursion(char *s);
```

### Task 3: You mustn't be afraid to dream a little bigger, darling

In this task, you need to write a function called `factorial` that returns the factorial of a given number. The function should return -1 if the number is less than 0. The factorial of 0 is 1. The prototype of the function is as follows:

```c
int factorial(int n);
```

### Task 4: Once an idea has taken hold of the brain it's almost impossible to eradicate

In this task, you need to write a function called `_pow_recursion` that returns the value of `x` raised to the power of `y`. The function should return -1 if `y` is less than 0. The prototype of the function is as follows:

```c
int _pow_recursion(int x, int y);
```

### Task 5: Your subconscious is looking for the dreamer

In this task, you need to write a function called `_sqrt_recursion` that returns the natural square root of a number. The function should return -1 if the number does not have a natural square root. The prototype of the function is as follows:

```c
int _sqrt_recursion(int n);
```

### Task 6: Inception. Is it possible?

In this task, you need to write a function called `is_prime_number` that checks whether a given number is prime or not. The function should return 1 if the number is prime, and 0 otherwise. The prototype of the function is as follows:

```c
int is_prime_number(int n);
```

### Task 8: Inception. Now, before you bother telling me it's impossible

In this task, you need to write a function called `wildcmp` that compares two strings and returns 1 if the strings can be considered identical, and 0 otherwise. The second string can contain the special character `*`, which can replace any string (including an empty string). The prototype of the function is as follows:

```c
int wildcmp(char *s1, char *s2);
```
### End
