# Project: 0x06 - More Pointers, Arrays, and Strings

## Learning Objectives

By the end of this project, you should be able to explain the following topics without the help of Google:

- Pointers and their usage
- Arrays and how to work with them
- Differences between pointers and arrays
- String manipulation and how to manipulate strings
- Scope of variables

## Requirements

- Allowed editors: vi, vim, emacs
- All files should be compiled on Ubuntu 20.04 LTS using gcc with the following options: -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- The repository should include a README.md file at the root of the project
- The code should adhere to the Betty style and will be checked with betty-style.pl and betty-doc.pl
- Do not use global variables
- Each file should contain no more than 5 functions
- The standard library is not allowed. Functions like 'printf', 'puts', and others are forbidden
- You are allowed to use the _putchar function
- The _putchar.c file is not required for this project and should not be pushed to your repository
- The prototypes of all your functions should be stored in a header file called main.h
- The header file should be pushed to your repository

## Tasks

**0. strcat**
Write a function that concatenates two strings.

- Prototype: `char *_strcat(char *dest, char *src);`
- This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte.
- Returns a pointer to the resulting string `dest`.

**1. strncat**
Write a function that concatenates two strings.

- Prototype: `char *_strncat(char *dest, char *src, int n);`
- The `_strncat` function is similar to the `_strcat` function, except that it will use at most `n` bytes from `src`.
- `src` does not need to be null-terminated if it contains `n` or more bytes.
- Returns a pointer to the resulting string `dest`.

**2. strncpy**
Write a function that copies a string.

- Prototype: `char *_strncpy(char *dest, char *src, int n);`
- Your function should work exactly like `strncpy`.

**3. strcmp**
Write a function that compares two strings.

- Prototype: `int _strcmp(char *s1, char *s2);`
- Your function should work exactly like `strcmp`.

**4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy**
Write a function that reverses the content of an array of integers.

- Prototype: `void reverse_array(int *a, int n);`
- Where `n` is the number of elements of the array.

**6. Expect the best. Prepare for the worst. Capitalize on what comes**
Write a function that capitalizes all words of a string.

- Prototype: `char *cap_string(char *);`
- Separators of words: space, tabulation, new line, `,`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}`.

**7. Mozart composed his music not for the elite, but for everybody**
Write a function that encodes a string into 1337.

- Prototype: `char *leet(char *);`
- Letters `a` and `A` should be replaced by `4`
- Letters `e` and `E` should be replaced by `3`
- Letters `o` and `O` should be replaced by `0`
- Letters `t` and `T` should be replaced by `7`
- Letters `l` and `L` should be replaced by `1`
- You can only use one `if` statement
- You can only use two loops
- You are not allowed to use `switch` or any ternary operations.

**9. Numbers have life; they're not just symbols on paper**
Write a function that prints an integer.

- Prototype: `void print_number(int n);`
- You can only use the `_putchar` function to print.
- You are not allowed to use long, arrays, or pointers.
- You are not allowed to hard-code special values.

**10. A dream doesn't become reality through magic; it takes sweat, determination and hard work**
Add one line to this code, so that the program prints `a[2] = 98`, followed by a new line.

```c
int main(void)
{
    int a[5];

    a[2] = 98;
    /* Your code goes here */
    return (0);
}
```

- You are not allowed to use the variable `a` in your new line of code.
- You are not allowed to modify the variable `p`.
- You can only write one statement.
- You are not allowed to use `,`.
- You are not allowed to code anything else other than the line of expected code.
- Your code should be written at line 19, before the `;` token.
- Do not remove anything from the initial code (not even the comments) and don’t change anything but the line of code you are adding.
- You are allowed to use the standard library.

**11. It is the addition of strangeness to beauty that constitutes the romantic character in art**
Write a function that adds two numbers.

- Prototype: `char *infinite_add(char *n1, char *n2, char *r, int size_r);`
- Where `n1` and `n2` are the two numbers to add
- `r` is the buffer that the function will use to store the result
- `size_r` is the buffer size
- The function returns a pointer to the result
- You can assume that you will always get positive numbers, or 0
- You can assume that there will be only digits in the strings `n1` and `n2`
- `n1` and `n2` will never be empty
- If the result can't be stored in `r`, the function must return `0`

**12. Noise is a buffer, more effective than cubicles or booth walls**
Write a function that prints a buffer.

- Prototype: void print_buffer(char *b, int size);
- The function must print the content of `size` bytes of the buffer pointed by `b`.
- The output should print 10 bytes per line.
- Each line should start with the position of the first byte of the line in hexadecimal (8 characters), starting with 0.
- Each line should show the ... ... hexadecimal content (2 characters) of the buffer, 2 bytes at a time, separated by a space.
- Each line should also show the content of the buffer. If the byte is a printable character, print the letter; if not, print a `.`.
- Each line should end with a new line (`\n`).
- If `size` is 0 or less, the output should be a new line only (`\n`).
- You are allowed to use standard library functions.

## End
