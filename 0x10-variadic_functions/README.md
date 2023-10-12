# 0x10. C - Variadic Functions

This project is focused on learning about variadic functions in C. Variadic functions are functions that can take a variable number of arguments, and they are widely used in C to create flexible and extensible functions.

## Learning Objectives

After completing this project, you should be able to:

- Understand what variadic functions are.
- Use va_start, va_arg, and va_end macros to work with variadic arguments.
- Learn the purpose and usage of the const type qualifier.

## Requirements

Before we dive into the project tasks, let's clarify the requirements for this project:

- Allowed editors: vi, vim, emacs.
- Compilation on Ubuntu 20.04 LTS using gcc with the options: -Wall -Werror -Wextra -pedantic -std=gnu89.
- All your files should end with a new line.
- A README.md file at the root of the project directory is mandatory.
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
- Avoid using global variables.
- Each file should contain no more than 5 functions.
- The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc. is forbidden.
- You are allowed to use the following macros: va_start, va_arg, and va_end.
- You are allowed to use _putchar.
- You don't have to push _putchar.c; we will use our file. If you do, it won't be taken into account.
- In the provided examples, the main.c files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do, we won't take them into account). We will use our own main.c files at compilation, which might be different from the one shown in the examples.
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called variadic_functions.h.
- Don't forget to push your header file.
- All your header files should be include guarded.

## Project Tasks

### Task 0: Beauty is variable, ugliness is constant

Write a function that returns the sum of all its parameters.

```c
Prototype: int sum_them_all(const unsigned int n, ...);
```

### Task 1: To be is to be the value of a variable

Write a function that prints numbers, followed by a new line.

```c
Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
```

### Task 2: One woman's constant is another woman's variable

Write a function that prints strings, followed by a new line.

```c
Prototype: void print_strings(const char *separator, const unsigned int n, ...);
```

### Task 3: To be is a to be the value of a variable

Write a function that prints anything.

```c
Prototype: void print_all(const char * const format, ...);
```

## Example Compilation and Execution

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
./a
# Output: 1122
```

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
./b
# Output: 0, 98, -1024, 402
```

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
./c
# Output: Jay, Django
```

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d
./d
# Output: B, 3, stSchool
```
