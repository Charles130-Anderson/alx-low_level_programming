#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything according to the specified format.
 * @format: A format string containing type specifiers for arguments.
 * c: char
 * i: integer
 * f: float
 * s: string (char *)
 * Any other character is ignored.
 * @...: The variable number of arguments to be printed.
 */
void print_all(const char *const format, ...)
{
int i = 0;                /* Index for iterating through format string */
char *sep = "";           /* Separator for values in the output */
va_list list;             /* Variable argument list */

va_start(list, format);   /* Initialize the argument list */

while (format && format[i])
{
if (i > 0)
printf("%s", sep); /* Print separator if not the first value */

switch (format[i])
{
case 'c':
printf("%c", va_arg(list, int)); /* Print char */
break;
case 'i':
printf("%d", va_arg(list, int)); /* Print integer */
break;
case 'f':
printf("%f", va_arg(list, double)); /* Print float */
break;
case 's':
{
char *str = va_arg(list, char *); /* Get string */
if (!str)
str = "(nil)";
printf("%s", str); /* Print string or (nil) if NULL */
}
break;
}

sep = ", "; /* Set separator for the next value */
i++;
}

va_end(list); /* Clean up the argument list */
printf("\n"); /* Print a newline character at the end */
}
