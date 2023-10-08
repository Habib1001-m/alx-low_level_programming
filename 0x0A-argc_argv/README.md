# Project: 0x0A. C - argc, argv

## Table of Contents

1. [About](#about)
2. [Learning Objectives](#learning-objectives)
3. [Requirements](#requirements)
4. [Tasks](#tasks)
    - [Task 0: It ain't what they call you, it's what you answer to](#task-0-it-aint-what-they-call-you-its-what-you-answer-to)
    - [Task 1: Silence is argument carried out by other means](#task-1-silence-is-argument-carried-out-by-other-means)
    - [Task 2: The best argument against democracy is a five-minute conversation with the average voter](#task-2-the-best-argument-against-democracy-is-a-five-minute-conversation-with-the-average-voter)
    - [Task 3: Neither irony nor sarcasm is argument](#task-3-neither-irony-nor-sarcasm-is-argument)
    - [Task 4: To infinity and beyond](#task-4-to-infinity-and-beyond)
    - [Task 5: Minimal Number of Coins for Change](#task-5-minimal-number-of-coins-for-change)

## About

This project, developed by Julien Barbier, is a part of the curriculum for the ALX Software Engineering program. It focuses on using command-line arguments (`argc` and `argv`), implementing various tasks in the C programming language, and adhering to coding style guidelines.

## Learning Objectives

Upon completing this project, you will gain knowledge in the following areas:

- How to use arguments passed to your program
- Understanding the two prototypes of `main` and when to use them
- Utilizing `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
- You are allowed to use the standard library

## Tasks

### Task 0: It ain't what they call you, it's what you answer to

Write a program that prints its name, followed by a new line.

- If you rename the program, it will print the new name, without having to compile it again
- You should not remove the path before the name of the program

Example:

```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
$ ./mynameis 
./mynameis
$ mv mynameis mynewnameis
$ ./mynewnameis 
./mynewnameis
```

**Repository:**

- GitHub repository: [alx-low_level_programming](#)
- Directory: `0x0A-argc_argv`
- File: `0-whatsmyname.c`

### Task 1: Silence is argument carried out by other means

Write a program that prints the number of arguments passed into it.

- Your program should print a number, followed by a new line

Example:

```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
$ ./nargs 
0
$ ./nargs hello
1
$ ./nargs "hello, world"
1
$ ./nargs hello, world
2
```

**Repository:**

- GitHub repository: [alx-low_level_programming](#)
- Directory: `0x0A-argc_argv`
- File: `1-args.c`

### Task 2: The best argument against democracy is a five-minute conversation with the average voter

Write a program that prints all arguments it receives.

- All arguments should be printed, including the first one
- Only print one argument per line, ending with a new line

Example:

```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
$ ./args 
./args
$ ./args "You can do anything, but not everything."
./args
You
can
do
anything,
but
not
everything.
```

**Repository:**

- GitHub repository: [alx-low_level_programming](#)
- Directory: `0x0A-argc_argv`
- File: `2-args.c`

### Task 3: Neither irony nor sarcasm is argument

Write a program that multiplies two numbers.

- Your program should print the result of the multiplication, followed by a new line
- You can assume that the two numbers and result of the multiplication can be stored in an integer
- If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

Example:

```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
$ ./mul 2 3
6
$ ./mul 2 -3
-6
$ ./mul 2 0
0
$ ./mul 245 3245342
795108790
$ ./mul
Error
```

**Repository:**

- GitHub repository: [alx-low_level_programming](#)
- Directory: `0x0A-argc_argv`
- File: `3-mul.c`

### Task 4: To infinity and beyond

Write a program that adds positive numbers.

- Print the result, followed by a new line
- If no number is passed to the program, print 0, followed by a new line
- If one of the numbers contains symbols that are not digits, print Error, followed by a new line, and return 1
- You can assume that numbers and the addition of all the numbers can be stored in an int

Example:

```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
$ ./add 1 1
2
$ ./add 1 10 100 1000
1111
$ ./add 1 2 3 e 4 5
Error
$ ./add
0


```

**Repository:**

- GitHub repository: [alx-low_level_programming](#)
- Directory: `0x0A-argc_argv`
- File: `4-add.c`

### Task 5: Minimal Number of Coins for Change

Write a program that prints the minimum number of coins to make change for an amount of money.

- Usage: `./change cents` (where `cents` is the amount of cents you need to give back)
- If the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
- You should use `atoi` to parse the parameter passed to your program
- If the number passed as the argument is negative, print 0, followed by a new line
- You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

Example:

```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
$ ./change 
Error
$ ./change 10
1
$ ./change 100
4
$ ./change 101
5
$ ./change 13
3
```

**Repository:**

- GitHub repository: [alx-low_level_programming](#)
- Directory: `0x0A-argc_argv`
- File: `100-change.c`

## End
