# Alx Software Engineering Program - Low-Level Programming

This repository contains C programs developed as part of the Alx Software Engineering Program's low-level programming curriculum. Each program is designed to showcase different concepts and skills in C programming.

## Directory: 0x04-more_functions_nested_loops

This directory contains C files that focus on implementing more functions and working with nested loops.

### 0-isupper.c

This program defines a function `_isupper` that checks whether a given character is uppercase.

```c
Prototype: int _isupper(int c);
Returns 1 if c is uppercase
Returns 0 otherwise
```

### 1-isdigit.c

This program defines a function `_isdigit` that checks whether a given character is a digit (0 through 9).

```c
Prototype: int _isdigit(int c);
Returns 1 if c is a digit
Returns 0 otherwise
```

### 2-mul.c

This program defines a function `mul` that multiplies two integers.

```c
Prototype: int mul(int a, int b);
```

### 3-print_numbers.c

This program defines a function `print_numbers` that prints the numbers from 0 to 9, followed by a new line.

```c
Prototype: void print_numbers(void);
You can only use _putchar twice in your code
```

### 4-print_most_numbers.c

This program defines a function `print_most_numbers` that prints the numbers from 0 to 9, followed by a new line, excluding 2 and 4.

```c
Prototype: void print_most_numbers(void);
Do not print 2 and 4
You can only use _putchar twice in your code
```

### 5-more_numbers.c

This program defines a function `more_numbers` that prints 10 times the numbers from 0 to 14, followed by a new line.

```c
Prototype: void more_numbers(void);
You can only use _putchar three times in your code
```

### 6-print_line.c

This program defines a function `print_line` that draws a straight line in the terminal using the character `_`.

```c
Prototype: void print_line(int n);
You can only use _putchar function to print
Where n is the number of times the character _ should be printed
The line should end with a \n
If n is 0 or less, the function should only print \n
```

### 7-print_diagonal.c

This program defines a function `print_diagonal` that draws a diagonal line in the terminal using the character `\`.

```c
Prototype: void print_diagonal(int n);
You can only use _putchar function to print
Where n is the number of times the character \ should be printed
The diagonal should end with a \n
If n is 0 or less, the function should only print a \n
```

### 8-print_square.c

This program defines a function `print_square` that prints a square using the character `#`.

```c
Prototype: void print_square(int size);
You can only use _putchar function to print
Where size is the size of the square
If size is 0 or less, the function should print only a new line
Use the character # to print the square
```

### 9-fizz_buzz.c

This program prints numbers from 1 to 100, replacing multiples of 3 with "Fizz," multiples of 5 with "Buzz," and multiples of both 3 and 5 with "FizzBuzz."

```c
Program: FizzBuzz
```

### 10-print_triangle.c

This program defines a function `print_triangle` that prints a triangle using the character `#`.

```c
Prototype: void print_triangle(int size);
You can only use _putchar function to print
Where size is the size of the triangle
If size is 0 or less, the function should print only a new line
Use the character # to print the triangle
```

### 100-prime_factor.c

This program finds and prints the largest prime factor of the number 612852475143.

```c
Program: Largest Prime Factor
```

### 101-print_number.c

This program defines a function `print_number` that prints an integer.

```c
Prototype: void print_number(int n);
You can only use _putchar function to print
You are not allowed to use long
You are not allowed to use arrays or pointers
You are not allowed to hard-code special values
```

---

Please note that these programs are designed for educational purposes and may need to be compiled and executed in a suitable C development environment. For some programs, there are restrictions on the number of `_putchar` calls or the use of certain features, as specified in the problem descriptions.
