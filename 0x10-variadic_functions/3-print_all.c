#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - Prints a character
 * @args: The va_list containing the argument
 */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}
/**
 * print_int - Prints an integer
 * @args: The va_list containing the argument
 */
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}
/**
 * print_float - Prints a float
 * @args: The va_list containing the argument
 */
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}
/**
 * print_string - Prints a string
 * @args: The va_list containing the argument
 */
void print_string(va_list args)
{
char *str = va_arg(args, char *);

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
}
/**
 * print_all - Prints values of different types based on a format string
 * @format: The format string specifying the types of the arguments
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char current_format;

va_start(args, format);

while (format && format[i])
{
current_format = format[i];

if (i != 0 && (current_format == 'c' || current_format == 'i' ||
current_format == 'f' || current_format == 's'))
{
printf(", ");
}

switch (current_format)
{
case 'c':
print_char(args);
break;
case 'i':
print_int(args);
break;
case 'f':
print_float(args);
break;
case 's':
print_string(args);
break;
}

i++;
}

va_end(args);

printf("\n");
}
