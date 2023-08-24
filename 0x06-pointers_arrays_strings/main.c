#include <stdio.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Demonstrates using a line of code to modify `n` through `p`,
 * without using `a` or modifying `p`. Prints `98\n` using `printf`.
 *
 * Return: Always 0 (indicating successful execution)
 */

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

/*
* Write your line of code here...
* Remember:
* - Not allowed to use a
* - Not allowed to modify p
* - Only one statement
* - Not allowed to code anything else than this line of code
*/
*(p + 5)  = 98;

/*
* ...so that this prints 98\n
*/
printf("a[2] = %d\n", a[2]);
return (0);
}
