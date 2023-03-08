/**
 * factorial - calculates factorial of a number
 * @n: number to be calculated
 * Return: factorial of the number
 * -1 if number is less than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
