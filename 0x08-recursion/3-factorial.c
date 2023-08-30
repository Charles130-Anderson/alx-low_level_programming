/**
 * factorial-Returns the factorial of a given number
 * @n: the number to calculate the factorial of
 * Return: the factorial of the number n , or -1 if n is negative
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}
