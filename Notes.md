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
    2.4 [Input with Scanf](#2.4)<br>
    2.5 [Arithmetic Operations and Expressions](#2.5)<br>
    2.6 [Booleans and If Statements](#2.6)<br>
    2.7 [Logical Operators and Switches](#2.7)<br>
    2.8 [Loops](#2.8)<br>
    2.9 [Characters](#2.9)<br>
    2.10 [Working with Arrays](#2.10)<br>
    2.11 [Basics of Functions](#2.11)<br>
    2.12 [Using Pointers with Functions](#2.12)<br>
    2.13 [Using Pointers with Arrays](#2.13)<br>
    2.14 [Working with Strings](#2.14)<br>
3. [Understanding pointers in C](#3)<br>
    3.1 [Introduction to Memory Structure](#3.1)<br>
    3.2 [What is a Pointer?](#3.2)<br>
    3.3 [Why Pointers?](#3.3)<br>
    3.4 [Pointer Expression](#3.4)<br>
    3.5 [Pointer Types](#3.5)<br>
    3.6 [Call by Value](#3.6)<br>
    3.7 [Call by Reference](#3.7)<br>
    3.8 [Function Returning Pointers](#3.8)<br>
    3.9 [Programming Example 1](#3.9)<br>
    3.10 [Programming Example 2](#3.10)<br>
    3.11 [Pointer Arithmetic](#3.11)<br>
    

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

These notes relate to the course *Fundamentals of Programming in C* by Scott Consentino, available for free on Udemy.com. The course takes basis in ubuntu using the gcc compiler.

### 2.1 Introduction to C<a name="2.1"></a>
[Go to top](#top)

Statements that start with '#' are called directives. Typically, a C-program is divided into three sections: (1) pre-processing, (2) compiling, and (3) linking. 

(1) looks at the directives and parses them. In (2), all the code is turned into  machine instructions also called object code. (3) combines the object code with everything else that is needed to make the code work.

A special type of directive is the `#define`, which is used to define global variables or __macros__.

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

### 2.4 Input with Scanf<a name="2.4"></a>
[Go to top](#top)

When taking user input, the storage variables should be initialized first. Instead of scanning the input to the variable, it should be scanned to the memory location of the variable, i.e., the address (`&variable`).

The function `scanf` can take multiple inputs in one line by just giving more identifier characters. Similarly, the user can input the variables in one line using spaces, as the function looks for voids to distinguish inputs. The format of what scanf should read can be defined in the function call.
```c
#include <stdio.h>

int main(void) {
    int i = 0;
    int j = 0;

    scanf(%d%d, &i, &j);    // Scanf looks for voids to distinguish the variables
    scanf(%d/%d, &i, &j);   // Scanf looks for input as: input1/input2. If given as above, the second input will not be found, as it is looking for "/" as the separator
}
```

### 2.5 Arithmetic Operations and Expressions<a name="2.5"></a>
[Go to top](#top)

It is important to keep track of types when doing arithmetic operations. If all input are of type `int`, the result will always be ans `int` as well. At least one input need to be a floating point for the result to be interpreted as a float as well. Results can cast into other types, fx., if two floating points are divided (and the result should be a float), the result can be cast into an `int`, meaning the decimal points will be neglected (5.5 becomes 5).

Unary operators have the highest presidence in c. That is the `-` and `+` in front of a variable to negate it or the opposite.


### 2.6 Booleans and If Statements<a name="2.6"></a>
[Go to top](#top)

C does not have a default boolean implementation. Therefore, the library `<stdbool.h>`, which will include the `true` and `false` statements. However, 0 and 1 can also be used. Otherwise, it works exactly the same as any other programming language.


### 2.7 Logical Operators and Switches<a name="2.7"></a>
[Go to top](#top)

Logical operators:

AND : &&
OR  : ||
NOT : ~

`switch` cases is typically more efficient than `if` statements for situations where there are many cases. The corresponding `else` is `default` and executes if no other case is activated.


### 2.8 Loops<a name="2.8"></a>
[Go to top](#top)

Loops are similar to most other programming languages.

```c
// Basic while loop. Checks before running.

int main(void) {
    int i = 0;

    while (i <= 10) {
        printf("%d",i);
        i++;
    }

    return 0;
}
```

```c
// Basic do-while loop. Checks after running. I.e., will execute at least once unlike the while loop.

int main(void) {
    int i = 0;

    do {
        printf("%d",i);
        i++;
    } while (i <= 10);

    return 0;
}
```

```c
// Basic for loop. Iterates a known number of times.

int main(void) {
    
    for (int i = 0; i <= 10; i++) {
        printf("%d",i);
    }

    return 0;
}
```

Typically, `for` loops are preferred for simple conditions, while `while` (and `do while`) loops are more useful for more complex conditions.


### 2.9 Characters<a name="2.9"></a>
[Go to top](#top)

Characters are called using the type `char` and needs to be placed in single quotes `''`. Using double quotes `""` will lead to an error, as C thinks it is a string (which is actually a pointer to a set of characters `char *`).

Interestingly, characters are just numbers in disguise (through ASCII code). Therefore, if characters are printed using the integer format (`%d`) rather than the character format (`%c`), it will print the ASCII value. Additionally, it is possible to add to characters using basic arithmetic, fx.:
```c
int main(void) {
    char c = 'A';
    printf("%c\n",c);
    c += 1;
    printf("%c\n",c);

    return 0;
}
```
will first print 'A' and then 'B'. To convert from upper case to lower case, simply add 32 and vice versa.

Note that integers can be formatted as a character... Might be useful for low level programming.

`scanf` can be used to get user input for characters. However, `getchar()` can also be used to get the __first__ character. Putting in numeric values will give the character value, i.e., typing 65 during the prompt will scan '6'. `putchar` can be used to print single characters like `printf`.


### 2.10 Working with Arrays<a name="2.10"></a>
[Go to top](#top)

Arrays are used to declare lists of the same type. It is not possible to provide more values than the size of the array, but it is possible to give less. In that case uninitialized values are set to 0.

In C it is possible to index values that are not in the array. This is due to C not conducting checks of the array bounds unlike higher level languages. This means that C reads garbage memory. It is, therefore, neccessary to conduct your own checks of the array bounds.

The `sizeof` function can be used to get the size of elements or arrays in bytes. `sizeof(array)/sizeof(array[0])` will give the actual length of the array.


### 2.11 Basics of Functions<a name="2.11"></a>
[Go to top](#top)

Similar to other programming languages. Used to avoid code repetition. See C++ notes.

Note that functions should be defined before `main` to avoid warnings. Another way is to simply declare the function before `main`, i.e., the name and input types (explicit declaration). If it is defined after it is an implicit declaration. The explicit declaration makes it possible to give errors if input is not of the correct type.


### 2.12 Using Pointers with Functions<a name="2.12"></a>
[Go to top](#top)

Using pointers instead of the variable makes it possible to change the value inside a function. This means that the function references the memory address rather than the value itself, leading to overwriting what is at that memory location. The example below shows a simple program where the value at a memory location is incremented by 1.
```c
#include <stdio.h>

int* addOne(int *);

int main(void) {
    int i = 0;
    int* a = &i;

    a = addOne(a);
    printf("%d",*a);

    return 0;
}

int* addOne(int* a) {
    *a = *a + 1;
    return a;
}
```
In this case the printed value will be `i+1=0+1=1`.


### 2.13 Using Pointers with Arrays<a name="2.13"></a>
[Go to top](#top)

Creating a pointer to the first element of an array can be useful in assembly. This is because the pointer can be incremented to retrieve the other elements in an array. The example below shows how to easily loop through an array using pointers, giving the sum of the elements.
```c
#include <stdio.h>

int main(void) {
    int a[3] = {1,2,3};
    int sum, *p;
    sum = 0;

    for (p = &a[0]; p < &a[3]; p++) {
        sum += *p;
    }

    printf("%d\n",sum);

    return 0;
}
```


### 2.14 Working with Strings<a name="2.14"></a>
[Go to top](#top)

Strings can be defined in two ways. The first is simply an array of characters. The second is as a pointer, which initially will point to the first element of the string.

The library `<string.h>` contains a lot of useful functions for working with strings.

Note that C automatically adds the null terminator (`\0`) to the end of the string. This is how C recognizes when to stop printing.


## Section 3: Understanding Pointers in C<a name="3"></a>
[Go to top](#top)

These notes relate to the course *Understanding Pointers in C* by Dr. B. S. Satpute, available for free on Udemy.com.

### 3.1 Introduction to Memory Structure<a name="3.1"></a>
[Go to top](#top)

RAM can be viewed as a tiled floor where each tile represents a byte with a certain memory address given in hexadecimal numbers. When assigning, fx., an `int` 4 bytes will be allocated in which the value of the int is stored. For characters, 1 byte is allocated, however, before storing the characters will first be converted into the ASCII value (A -> 65) which in turn will be converted into the binary equivalent (65 -> 01000001). Other types will also be converted into binary values.

Note that the size of a pointer depends on the architecture. 32-bit the size is 4 byte, 64-bit the size is 8 byte.


### 3.2 What is a Pointer?<a name="3.2"></a>
[Go to top](#top)

There are two important operators related to pointers. `&` - the address of operator, `*` - value at address (also called dereference operator). Say that an integer `a=5` at memory address `ADC1` (hexadecimal). Then `&a` will be `ABC1` and `*(&a)=a=5`.

A pointer is simply a variable that stores the memory address of another variable. It will have its own memory address, different from the variable that it points to.


### 3.3 Why Pointers?<a name="3.3"></a>
[Go to top](#top)

There are multiple reasons to use pointers rather than accessing the variables. Below is a list from the course:
- Allows for efficient memory management: `malloc()`, `calloc()`, `free()` (these functions allows for demanding and freeing memory during running of the program without naming, i.e., just using a pointer)
- Function arguments: Call by reference instead of value
- Efficient array and string handling. Since the pointer can be used to iterate easily.

Code examples are shown below.

```c
// Example of using malloc(). Creates a pointer that points to a memory location with no name. In this case the location is reserved for a variable of type int.

int *p = (int *) malloc(sizeof(int));
```

```c
// Example of using call by reference.

void swap(int a, int b) { // This function simple copies the input rather than swapping it in memory. The original variables are unchanged
    int temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b) { // This function swaps the values in the memory location, meaning it will have an effect even if the return type is void. The original variables are swapped.
    int temp = *a;
    *a = *b;
    *b = temp;
}
```


### 3.4 Pointer Expression<a name="3.4"></a>
[Go to top](#top)


### 3.5 Pointer Types<a name="3.5"></a>
[Go to top](#top)


### 3.6 Call by Value<a name="3.6"></a>
[Go to top](#top)


### 3.7 Call by Reference<a name="3.7"></a>
[Go to top](#top)


### 3.8 Function returning Poitners<a name="3.8"></a>
[Go to top](#top)


### 3.9 Programming Example 1<a name="3.9"></a>
[Go to top](#top)


### 3.10 Programming Example 2<a name="3.10"></a>
[Go to top](#top)


### 3.11 Pointer Arithmetic<a name="3.11"></a>
[Go to top](#top)
