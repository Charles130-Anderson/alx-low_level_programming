#include <stdio.h>

/**
 * Adds two numbers together.
 *
 * @param n1 The first number.
 * @param n2 The second number.
 * @param r The buffer to store the result.
 * @param size_r The size of the buffer.
 * @return A pointer to the result, or 0 if the result cannot be stored in the buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int overflow = 0, i = 0, j = 0, digits = 0;
    int val1 = 0, val2 = 0, temp_sum = 0;

    while (*(n1 + i) != '\0')
        i++;
    while (*(n2 + j) != '\0')
        j++;
    i--;
    j--;
    if (j >= size_r || i >= size_r)
        return 0;
    while (j >= 0 || i >= 0 || overflow == 1)
    {
        if (i < 0)
            val1 = 0;
        else
            val1 = *(n1 + i) - '0';
        if (j < 0)
            val2 = 0;
        else
            val2 = *(n2 + j) - '0';
        temp_sum = val1 + val2 + overflow;
        if (temp_sum >= 10)
            overflow = 1;
        else
            overflow = 0;
        if (digits >= (size_r - 1))
            return 0;
        *(r + digits) = (temp_sum % 10) + '0';
        digits++;
        j--;
        i--;
    }
    if (digits == size_r)
        return 0;
    *(r + digits) = '\0';
    for (i = 0, j = digits - 1; i < j; i++, j--)
    {
        char temp = *(r + i);
        *(r + i) = *(r + j);
        *(r + j) = temp;
    }
    return r;
}

int main(void)
{
    char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
    char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
    char r[100];
    char r2[10];
    char r3[11];
    char *res;

    res = infinite_add(n, m, r, 100);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }

    n = "1234567890";
    m = "1";
    res = infinite_add(n, m, r2, 10);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }

    n = "999999999";
    m = "1";
    res = infinite_add(n, m, r2, 10);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }

    res = infinite_add(n, m, r3, 11);
    if (res == 0)
    {
        printf

