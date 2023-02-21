#include "main.h"

/**
 * _abs - computes absolute value of a number
 * @num: Parameter to be computed
 *
 * Return: The value
*/
int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}
