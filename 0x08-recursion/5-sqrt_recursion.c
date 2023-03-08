/**
 * _sqrt - checks square root of a number
 * @n: number to compare to
 * @i: square root of number
 * Return: square root
 */
int _sqrt(int n, int i)
{
	int try;

	try = i * i;
	if (try > n)
		return (-1);
	if (try == n)
		return (i);
	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion -  calls another function
 * @n: the number to be square rooted
 * Return: natural square root of the number
 * -1 if it doesn't have a square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
