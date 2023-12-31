# Repo: alx-low_level_programming

## 0x07. C - Even more pointers, arrays and strings

### Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- General
  - What are pointers to pointers and how to use them
  - What are multidimensional arrays and how to use them
  - What are the most common C standard library functions to manipulate strings

### Requirements

- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the [Betty style](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl). It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc is forbidden
- You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account
- In the following examples, the `main.c` files are showed as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one showed in the examples

### List of Tasks

1. **0-memset.c:** Write a function that fills memory with a constant byte.

    - Prototype: `char *_memset(char *s, char b, unsigned int n);`
    - The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`
    - Returns a pointer to the memory area `s`

2. **1-memcpy.c:** Write a function that copies memory area.

    - Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
    - The `_memcpy()` function copies `n` bytes from memory area `src` to memory area `dest`
    - Returns a pointer to `dest`

3. **2-strchr.c:** Write a function that locates a character in a string.

    - Prototype: `char *_strchr(char *s, char c);`
    - Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found

4. **3-strspn.c:** Write a function that gets the length of a prefix substring.

    - Prototype: `unsigned int _strspn(char *s, char *accept);`
    - Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`

5. **4-strpbrk.c:** Write a function that searches a string for any of a set of bytes.

    - Prototype: `char *_strpbrk(char *s, char *accept);`
    - The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`
    - Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found

6. **5-strstr.c:** Write a function that locates a substring.

    - Prototype: `char *_strstr(char *haystack, char *needle);`
    - The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes `\0` are not compared
    - Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found

7. **7-print_chessboard.c:** Write a function that prints the chessboard.

    - Prototype: `void print_chessboard(char (*a)[8]);`

8. **8-print_diagsums.c:** Write a function that prints the sum of the two diagonals of a square matrix of integers.

    - Prototype: `void print_diagsums(int *a, int size);`

9. **100-set_string.c:** Write a function that sets the value of a pointer to a char.

    - Prototype: `void set_string(char **s, char *to);`

10. **101-crackme_password:** Create a file that contains the password for the `crackme2` executable.

    - Your file should contain the exact password, no new line, no extra space
    - You may need to install the `openssl` library to run the `crackme2` program: `sudo apt install libssl-dev`
    - Edit the source list `sudo nano /etc/apt/sources.list` to add the following line: `deb http://security.ubuntu.com/ubuntu xenial-security main`
    - Then run `sudo apt update` and `sudo apt install libssl1.0.0`

Make sure to check the detailed instructions in each task file for additional requirements and examples.

