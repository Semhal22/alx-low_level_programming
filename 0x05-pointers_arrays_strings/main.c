#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code 
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First,solve the problem.");
	printf("%s\n", s1);
	printf("%s\n", ptr);

	return (0);
}
