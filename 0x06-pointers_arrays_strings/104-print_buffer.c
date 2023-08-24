#include "main.h"

/**
 * Reverse a string in place.
 * @param str The string to reverse.
 */
void reverseString(char *str)
{
    int i = 0;
    int j = 0;
    char temp;

    while (*(str + i) != '\0')
    {
        i++;
    }
    i--;

    for (j = 0; j < i; j++, i--)
    {
        temp = *(str + j);
        *(str + j) = *(str + i);
        *(str + i) = temp;
    }
}

/**
 * Add two numbers together.
 * @param num1 The first number to add.
 * @param num2 The second number to add.
 * @param result Pointer to the buffer to store the result.
 * @param size Size of the buffer.
 * @return Pointer to the result, or NULL if the result cannot be stored in the buffer.
 */
char *addNumbers(char *num1, char *num2, char *result, int size)
{
    int overflow = 0, i = 0, j = 0, digits = 0;
    int val1 = 0, val2 = 0, temp_sum = 0;

    while (*(num1 + i) != '\0')
        i++;
    while (*(num2 + j) != '\0')
        j++;
    i--;
    j--;
    if (j >= size || i >= size)
        return NULL;
    while (j >= 0 || i >= 0 || overflow == 1)
    {
        if (i < 0)
            val1 = 0;
        else
            val1 = *(num1 + i) - '0';
        if (j < 0)
            val2 = 0;
        else
            val2 = *(num2 + j) - '0';
        temp_sum = val1 + val2 + overflow;
        if (temp_sum >= 10)
            overflow = 1;
        else
            overflow = 0;
        if (digits >= (size - 1))
            return NULL;
        *(result + digits) = (temp_sum % 10) + '0';
        digits++;
        j--;
        i--;
    }
    if (digits == size)
        return NULL;
    *(result + digits) = '\0';
    reverseString(result);
    return result;
}

