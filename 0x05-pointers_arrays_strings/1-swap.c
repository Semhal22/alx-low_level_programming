/**
 * swap_int - swaps the values of two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int num1, num2;

	num1 = *a;
	num2 = *b;
	*a = num2;
	*b = num1;
}
