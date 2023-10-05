# 0x0B. C - malloc, free

## C Memory Allocation

This project is designed to help you understand memory allocation in C. By the end of this project, you should be able to explain the following concepts without needing to refer to external sources:

### General

- The difference between automatic and dynamic allocation
- What `malloc` and `free` are and how to use them
- When and why to use `malloc`
- How to use `valgrind` to check for memory leaks

## Requirements

Before working on this project, please ensure you have the following:

- An allowed text editor (vi, vim, emacs)
- Ubuntu 20.04 LTS for compiling using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your code files should end with a new line
- A mandatory `README.md` file at the root of the project folder
- Your code should follow the Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`
- Global variables are not allowed
- Each file should contain no more than 5 functions
- You are only allowed to use the C standard library functions `malloc` and `free`, and functions like `printf`, `puts`, `calloc`, `realloc`, etc., are forbidden
- You can use `_putchar`, but you don't have to push `_putchar.c` as it won't be taken into account
- The prototypes of all your functions and the `_putchar` function should be included in a header file called `main.h`
- Don't forget to push your header file

## Tasks

### 0. Float like a butterfly, sting like a bee

Create a function `create_array` that creates an array of characters and initializes it with a specific character.

- Prototype: `char *create_array(unsigned int size, char c);`
- Returns `NULL` if `size` is `0`
- Returns a pointer to the array, or `NULL` if it fails

### 1. The woman who has no imagination has no wings

Write a function `_strdup` that returns a pointer to a newly allocated space in memory, containing a copy of the string given as a parameter.

- Prototype: `char *_strdup(char *str);`
- Returns `NULL` if `str` is `NULL`
- On success, returns a pointer to the duplicated string
- Returns `NULL` if insufficient memory was available

### 2. He who is not courageous enough to take risks will accomplish nothing in life

Create a function `str_concat` that concatenates two strings.

- Prototype: `char *str_concat(char *s1, char *s2);`
- The returned pointer should point to newly allocated memory which contains the contents of `s1`, followed by the contents of `s2`, and null-terminated
- If `NULL` is passed, treat it as an empty string
- The function should return `NULL` on failure

### 3. If you even dream of beating me, you'd better wake up and apologize

Write a function `alloc_grid` that returns a pointer to a 2-dimensional array of integers.

- Prototype: `int **alloc_grid(int width, int height);`
- Each element of the grid should be initialized to `0`
- The function should return `NULL` on failure
- If `width` or `height` is `0` or negative, return `NULL`

### 4. It's not bragging if you can back it up

Create a function `free_grid` that frees a 2-dimensional grid previously created by the `alloc_grid` function.

- Prototype: `void free_grid(int **grid, int height);`
- Note that we will compile with your `alloc_grid.c` file, so make sure it compiles.

### 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe

Write a function `argstostr` that concatenates all the arguments of your program.

- Prototype: `char *argstostr(int ac, char **av);`
- Returns `NULL` if `ac` is `0` or `av` is `NULL`
- Returns a pointer to a new string, or `NULL` if it fails
- Each argument should be followed by a `\n` in the new string

### 6. I will show you how great I am

Create a function `strtow` that splits a string into words.

- Prototype: `char **strtow(char *str);`
- The function returns a pointer to an array of strings (words)
- Each element of this array should contain a single word, null-terminated
- The last element of the returned array should be `NULL`
- Words are separated by spaces
- Returns `NULL` if `str` is `NULL` or an empty string
- If your function fails, it should return `NULL`

---
