int actual_prime(int n, int k);

/**
 * is_prime_number - a function that says whether an integer is prime or not
 * @n: number to be used
 * Return: 1 if n is a prime number, 0 if not a prime number
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if its a  prime number recursively
 * @n: number to used for evaluation.
 * @k: iterator
 * Return: 1 if n is prime number , 0 if its not.
 */

int actual_prime(int n, int k)
{
if (k == 1)
return (1);
if (n % k == 0 && k > 0)
return (0);
return (actual_prime(n, k - 1));
}
