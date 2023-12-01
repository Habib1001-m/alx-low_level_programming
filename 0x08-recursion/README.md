# 0x08. C - Recursion

Welcome to the 0x08. C - Recursion project! This project is designed to enhance your understanding of recursion in the C programming language. By completing the tasks in this project, you'll gain insights into implementing recursion, identifying situations where recursion is appropriate, and recognizing scenarios where it might not be suitable.

## Learning Objectives

By the end of this project, you are expected to be able to explain, without the help of external resources:

- **What is recursion?**
  Recursion is a programming technique where a function calls itself directly or indirectly to solve a problem. It involves breaking down a problem into smaller subproblems and solving them.

- **How to implement recursion?**
  Recursion is implemented by having a function call itself within its definition. The function should have a base case to prevent infinite recursion.

- **In what situations you should implement recursion?**
  Recursion is suitable for problems that can be broken down into smaller, similar subproblems. It is often used when the problem has a recursive structure.

- **In what situations you shouldn't implement recursion?**
  Recursion may not be suitable for problems with a simple and straightforward iterative solution. It can lead to stack overflow if not carefully implemented with a proper base case.

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, with the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file at the root of the project folder is mandatory
- Your code should use the Betty style, checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc., is forbidden
- You are allowed to use _putchar
- You don't have to push _putchar.c; we will use our file. If you do, it won't be taken into account
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don't forget to push your header file
- You are not allowed to use any kind of loops
- You are not allowed to use static variables

## Tasks

### 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

Write a function that prints a string, followed by a new line.

- Prototype: `void _puts_recursion(char *s);`
- FYI: The standard library provides a similar function: puts. Run man puts to learn more.

### 1. Why is it so important to dream? Because, in my dreams, we are together

Write a function that prints a string in reverse.

- Prototype: `void _print_rev_recursion(char *s);`

### 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange

Write a function that returns the length of a string.

- Prototype: `int _strlen_recursion(char *s);`
- FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

### 3. You mustn't be afraid to dream a little bigger, darling

Write a function that returns the factorial of a given number.

- Prototype: `int factorial(int n);`
- If n is lower than 0, the function should return -1
- Factorial of 0 is 1

### 4. Once an idea has taken hold of the brain, it's almost impossible to eradicate

Write a function that returns the value of x raised to the power of y.

- Prototype: `int _pow_recursion(int x, int y);`
- If y is lower than 0, the function should return -1
- FYI: The standard library provides a different function: pow. Run man pow to learn more.

### 5. Your subconscious is looking for the dreamer

Write a function that returns the natural square root of a number.

- Prototype: `int _sqrt_recursion(int n);`
- If n does not have a natural square root, the function should return -1
- FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.

### 6. Inception. Is it possible?

Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

- Prototype: `int is_prime_number(int n);`

### 7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything

Write a function that returns 1 if a string is a palindrome and 0 if not.

- Prototype: `int is_palindrome(char *s);`
- An empty string is a palindrome

### 8. Inception. Now, before you bother telling me it's impossible

Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.

- Prototype: `int wildcmp(char *s1, char *s2);`
- s2 can contain the special character *.
- The special char * can replace any string (including an empty string)

## Repo Information

- **GitHub Repository:** [alx-low_level_programming](https://github.com/Habib1001-m/alx-low_level_programming)
- **Directory:** 0x08-recursion

## Compilation and Testing

Below are examples of how to compile and test the provided main.c files for each task:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
./0-puts_recursion

