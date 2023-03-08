/**
 * check_prime - checks prime or not recursively
 * @num: number to be checked
 * @i: factor of number
 *
 * Return: 1 if prime
 * 0 is not
 */
int check_prime(int num, int i)
{
	if (i == 1)
		return (1);
	else if (num % i == 0)
		return (0);
	else
		return (check_prime(num, i - 1));
	}
}
/**
 * is_prime_number - checks if a number is prime
 * @n: the number to be checked
 *
 * Return: 1 if n is prime
 * 0 if n is not
 */
int is_prime_number(int n)
{
	if (n < 1)
		return (0);
	if (n == 1)
		return (0);
	return (check_prime(n, n / 2));
}
