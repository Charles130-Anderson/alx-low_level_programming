#include "main.h"

/**
 * reverse_string - reverse array of characters
 * @str: pointer to the string to reverse
 * Return: void
 */
void reverse_string(char *str)
{
    int i = 0;
    int j = 0;
    char temp;

    while (*(str + i) != '\0')  // Find the end of the string
    {
        i++;
    }
    i--;

    for (j = 0; j < i; j++, i--)  // Swap characters from both ends
    {
        temp = *(str + j);
        *(str + j) = *(str + i);
        *(str + i) = temp;
    }
}

/**
 * add_numbers - add two numbers together
 * @num1: text representation of first number to add
 * @num2: text representation of second number to add
 * @result: pointer to buffer to store the result
 * @result_size: size of the buffer
 * Return: pointer to the result, or NULL if the result cannot be stored
 */
char *add_numbers(char *num1, char *num2, char *result, int result_size)
{
    int carry = 0, i = 0, j = 0, digits = 0;
    int val1 = 0, val2 = 0, temp_sum = 0;

    while (*(num1 + i) != '\0')  // Find the length of num1
        i++;
    while (*(num2 + j) != '\0')  // Find the length of num2
        j++;
    i--;
    j--;
    if (j >= result_size || i >= result_size)  // Check if result buffer is large enough
        return NULL;
    while (j >= 0 || i >= 0 || carry == 1)  // Perform addition digit by digit
    {
        if (i < 0)
            val1 = 0;
        else
            val1 = *(num1 + i) - '0';
        if (j < 0)
            val2 = 0;
        else
            val2 = *(num2 + j) - '0';
        temp_sum = val1 + val2 + carry;
        if (temp_sum >= 10)
            carry = 1;
        else
            carry = 0;
        if (digits >= (result_size - 1))  // Check if result buffer is full
            return NULL;
        *(result + digits) = (temp_sum % 10) + '0';
        digits++;
        j--;
        i--;
    }
    if (digits == result_size)
        return NULL;
    *(result + digits) = '\0';
    reverse_string(result);  // Reverse the result
    return result;
}
