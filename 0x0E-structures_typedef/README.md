# Project README: 0x0E - C Structures and Typedef

This project focuses on C structures and typedefs, helping you understand how to work with these concepts. You'll learn to define structures, initialize them, and use typedef to create custom type names.

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- What are structures, when, why, and how to use them
- How to use typedef

## Project Requirements

### Development Environment

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line

### File and Code Structure

- A `README.md` file at the root of the project folder is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `printf`, `malloc`, `free`, and `exit`
- Don't forget to push your header file
- All your header files should be include guarded

## Tasks

### Task 0: Poppy

In this task, you will define a new type `struct dog` with the following elements:

- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`

Example:

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### Task 1: A dog is the only thing on earth that loves you more than you love yourself

Write a function `init_dog` that initializes a variable of type `struct dog`. The function should have the following prototype:

```c
void init_dog(struct dog *d, char *name, float age, char *owner);
```

Example:

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

Write a function `print_dog` that prints a struct `dog`. The function should have the following prototype:

```c
void print_dog(struct dog *d);
```

The output should be in the following format, and you are allowed to use the standard library:

```
Name: Poppy
Age: 3.500000
Owner: Bob
```

If an element of `d` is NULL, print `(nil)` instead of that element (e.g., if `name` is NULL, print `Name: (nil)`). If `d` is NULL, print nothing.

Example:

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
```

### Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog, it's too dark to read

Define a new type `dog_t` as a new name for the type `struct dog`.

Example:

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### Task 4: A door is what a dog is perpetually on the wrong side of

Write a function `new_dog` that creates a new dog. The function should have the following prototype:

```c
dog_t *new_dog(char *name, float age, char *owner);
```

You have to store a copy of `name` and `owner`. Return `NULL` if the function fails.

Example:

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
```

### Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

Write a function `free_dog` that frees dogs. The function should have the following prototype:

```c
void free_dog(dog_t *d);
```

Example:

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
```

## Conclusion

This project is aimed at enhancing your understanding of C structures and typedefs. You'll learn to define, initialize, and manipulate struct variables, as well as create custom type names for your structs using typedef. By completing the tasks in this project, you will develop valuable skills in working with data structures and memory management in C.
