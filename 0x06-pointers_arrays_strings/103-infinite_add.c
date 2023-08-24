#include "main.h"

/**
 * reverse_string - Reverses a string in place.
 * @str: The string to be reversed.
 */
void reverse_string(char *str)
{
int start = 0;
int end = 0;
char temp;

Find the end of the string
while (*(str + end) != '\0')
{
end++;
}
end--;

Swap characters to reverse the string
for (start = 0; start < end; start++, end--)
{
temp = *(str + start);
*(str + start) = *(str + end);
*(str + end) = temp;
}
}

/**
 * infinite_addition - Adds two numbers represented as strings.
 * @a: The first number to add.
 * @b: The second number to add.
 * @result: Pointer to the buffer to store the result.
 * @result_size: Size of the result buffer.
 * Return: Pointer to the result buffer, or NULL on failure.
 */
char *infinite_addition(char *a, char *b, char *result, int result_size)
{
int carry = 0, i = 0, j = 0, digits = 0;
int digit1 = 0, digit2 = 0, temp_sum = 0;

Find the length of a and b
while (*(a + i) != '\0')
i++;
while (*(b + j) != '\0')
j++;
i--;
j--;

Check if result buffer is large enough
if (j >= result_size || i >= result_size)
return (NULL);

Perform addition with carry
while (j >= 0 || i >= 0 || carry == 1)
{
if (i < 0)
digit1 = 0;
else
digit1 = *(a + i) - '0';
if (j < 0)
digit2 = 0;
else
digit2 = *(b + j) - '0';
temp_sum = digit1 + digit2 + carry;
if (temp_sum >= 10)
carry = 1;
else
carry = 0;
if (digits >= (result_size - 1))
return (NULL);
*(result + digits) = (temp_sum % 10) + '0';
digits++;
j--;
i--;
}

if (digits == result_size)
return (NULL);

*(result + digits) = '\0';
reverse_string(result);
return (result);
}
