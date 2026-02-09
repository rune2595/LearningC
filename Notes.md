# Notes on C-programming

Author: __*rune2595*__

The current file contains notes on C-programming.
</br>
____

## Table of Contents <a name="top"></a>

1. [Introduction](#1)<br>
2. [Fundamentals of Programming in C](#2)<br>
    2.1 [Introduction to C](#2.1)<br>
    2.2 [Variables](#2.2)<br>
    2.3 [Pointers and Addresses](#2.3)<br>

## Section 1: Introduction<a name="1"></a>
[Go to top](#top)

All sample code can be found in the repo. Files generally adopt the name of the topic, but some might cover multiple topics when it makes sense.

__Bold text__

*Italic text*

`Inline code`

```c
// Example code block
#include <iostream>

// Code here!

```

## Section 2: Fundamentals of Programming in C<a name="2"></a>
[Go to top](#top)

These notes relate to the course *Fundamentals of Programming in C* by Scott ??, available for free on Udemy.com. The course takes basis in ubuntu using the gcc compiler.

### 2.1 Introduction to C<a name="2.1"></a>
[Go to top](#top)

Statements that start with '#' are called directives. Typically, a C-program is divided into three sections: (1) pre-processing, (2) compiling, and (3) linking. 

(1) looks at the directives and parses them. In (2), all the code is turned into  machine instructions also called object code. (3) combines the object code with everything else that is needed to make the code work.

### 2.2 Variables<a name="2.2"></a>
[Go to top](#top)

All variables have a type that should be declared during initialization of the variable. Multiple variables of the same type can be declared on the same line. The variables do not need an initial value, but giving one is good practice.

Common types: `int`, `float`, `double`, `char`, `void`.

Note that `float`-values need to be declared with the character `f`, otherwise C will generally read it as a `double`. `float`s are smaller and has less precision than `double`s.

Varibles are printed using *format strings* (e.g., `"%d"` for `int`s).
```c
#include <stdio.h>

int main(void){
    int number = 5;

    printf("%d\n",number);

    return 0;
}
```

### 2.3 Pointers and Addresses<a name="2.3"></a>
[Go to top](#top)

Computers contain blocks of memory, each with a unique address. When declaring a varible, it is put into one of these blocks. The programming language associates the variable with a given address. When the variable is called the program will check the value at the address.

In C-programming you can reference the addresses through the `&` operator. See example:
```c
#include <stdio.h>

int main(void){
    int i = 10;
    printf("The address of i is: %p\n", &i);

    return 0;
}
```
`%p` is the format string for addresses. The returned address is given in hexadecimal, which is the memory location.

Pointers point to specific memory locations and are initialized using `*`.
```c
#include <stdio.h>

int main(void){
    int i = 10;
    int *p = &i;  // points to the address
    printf("The address of i is: %p\n", &i); // prints the memory location of i
    printf("The address of i is: %p\n", p); // prints the memory location of i
    printf("The value of i is: %d\n", *p); // prints the value of i through dereferencing

    return 0;
}
```

But why pointers? Often you need to do memory manipulation, where data is stored in consecutive blocks of memory, and you are able to get the first block. When defining fx. lists, the programming language is storing a reference to the starting point of the list.







