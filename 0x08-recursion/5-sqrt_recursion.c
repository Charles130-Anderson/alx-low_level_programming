#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 *  _sqrt_recursion -Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 * Return: The natural square root , or -1 if no natural square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}

if (n == 0 || n == 1)
{
return (n);
}

int start = 1;
int end = n;
int result = -1;

while (start <= end)
{
int mid = (start + end) / 2;

if (mid * mid == n)
{
result = mid;
break;
}
else if (mid * mid < n)
{
start = mid + 1;
result = mid;
}
else
{
end = mid - 1;
}
}

return (result);
}
