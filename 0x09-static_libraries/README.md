# Project 0x09 - C Static Libraries

## Table of Contents

- [Project Description](#project-description)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Tasks](#tasks)
  - [Task 0: A library is not a luxury but one of the necessities of life](#task-0-a-library-is-not-a-luxury-but-one-of-the-necessities-of-life)
  - [Task 1: Without libraries what have we? We have no past and no future](#task-1-without-libraries-what-have-we-we-have-no-past-and-no-future)
- [Usage](#usage)
- [Contributing](#contributing)

## Project Description

This project is part of the ALX Software Engineering program's low-level programming curriculum. It focuses on static libraries in the C programming language. The main objective is to create a static library called `libmy.a` containing various functions and demonstrate the use of tools like `ar`, `ranlib`, and `nm`.

## Learning Objectives

Upon completing this project, you should be able to:

- Understand what a static library is and how it works.
- Create a static library using various C functions.
- Utilize tools like `ar`, `ranlib`, and `nm`.
- Follow coding style guidelines (Betty style).
- Work within the constraints of specific requirements and limitations.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All code will be compiled on Ubuntu 20.04 LTS using `gcc` with the following options:
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All code files should end with a newline character.
- You must include a `README.md` file at the root of the project folder.
- Your code should adhere to the Betty coding style, which will be checked using `betty-style.pl` and `betty-doc.pl`.
- Do not use global variables.
- Each C source file should contain no more than 5 functions.
- Do not use standard library functions like `printf`, `puts`, etc.
- You are allowed to use `_putchar`.
- Do not push `_putchar.c`; the project will use a provided file.
- Prototypes of all functions and the `_putchar` function prototype should be included in the `main.h` header file. Ensure you push this header file.
- Follow the project-specific instructions for each task.

## Tasks

### Task 0: A library is not a luxury but one of the necessities of life

**Create the static library `libmy.a` containing the following functions:**

```c
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

If you haven't implemented all of the above functions, create empty functions with the correct prototypes.

Don't forget to push your `main.h` file, which should contain all the function prototypes.

### Task 1: Without libraries what have we? We have no past and no future

**Create a script named `create_static_lib.sh` that creates a static library named `liball.a` from all the `.c` files in the current directory.**

## Usage

To compile and run the code in this project, follow these steps:

1. Clone the repository to your local machine:

   ```
   git clone https://github.com/Habib1001-m/alx-low_level_programming.git
   ```

2. Change to the project directory:

   ```
   cd 0x09-static_libraries
   ```

3. Compile the code using the provided scripts or your preferred method.

4. Run the resulting executable or script as needed.

## Contributing

Contributions to this project are welcome. To contribute, please follow these steps:

1. Fork the project.
2. Create a new branch.
3. Make your changes and test them.
4. Commit your changes and push to your fork.
5. Open a pull request, providing a detailed description of your changes.

