# Project Title: 0x0D. C - Preprocessor

## Project Description

This project focuses on understanding and working with the C preprocessor. It covers the usage of macros, predefined macros, and header file include guards. The tasks include creating header files with macros for various purposes, printing the name of the file, and working with function-like macros.

## Learning Objectives

By the end of this project, you will be able to explain and implement the following concepts without relying on external resources:

- Macros and how to use them in C.
- Common predefined macros in C.
- How to use include guards to prevent header file inclusion errors.

## Project Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All source code files should end with a new line.
- A `README.md` file at the root of the project folder is mandatory.
- Code should follow the Betty style, which will be checked using `betty-style.pl` and `betty-doc.pl`.
- Avoid using global variables.
- Limit each file to no more than 5 functions.
- Use only the C standard library functions `malloc`, `free`, and `exit`. Do not use functions like `printf`, `puts`, `calloc`, `realloc`, etc.
- You are allowed to use `_putchar`, but there is no need to include `_putchar.c` in your repository.
- Header files must be included with include guards to prevent multiple inclusions.
- Push your header files.
- Push only the required source code files; there's no need to push `main.c` files.
- Follow the repository and directory structure mentioned in the tasks.

## Tasks

### 0. Object-like Macro

- Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.
- File Name: `0-object_like_macro.h`

### 1. Pi

- Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.
- File Name: `1-pi.h`

### 2. File Name

- Write a program that prints the name of the file it was compiled from, followed by a new line.
- You are allowed to use the standard library.
- File Name: `2-main.c`

### 3. Function-like macro

- Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.
- File Name: `3-function_like_macro.h`

### 4. SUM

- Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.
- File Name: `4-sum.h`

## Repository Structure

```
0x0D-preprocessor/
│
├── 0-object_like_macro.h
├── 1-pi.h
├── 2-main.c
├── 3-function_like_macro.h
├── 4-sum.h
├── README.md
```

## Compilation and Testing

To compile the C files, use the following `gcc` command with the specified options:

```shell
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <source_file.c> -o <output_executable>
```

Replace `<source_file.c>` with the name of the C file you want to compile and `<output_executable>` with the desired name of the compiled executable.

You can then run the compiled executable to test the code.

Example:

```shell
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c -o file_name
./file_name
```
