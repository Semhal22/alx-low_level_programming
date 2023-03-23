#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - Prints a char
 * @argument: Argument to be printed
 */
void print_char(va_list argument)
{
	char character;

	character = va_arg(argument, int);
	printf("%c", character);
}

/**
 * print_int - Prints an integer
 * @argument: To be printed
 */
void print_int(va_list argument)
{
	int num;

	num = va_arg(argument, int);
	printf("%d", num);
}
/**
 * print_float - Prints a float
 * @argument: To be printed
 */
void print_float(va_list argument)
{
	float num;

	num = va_arg(argument, double);
	printf("%f", num);
}
/**
 * print_str - Prints a string
 * @argument: String to be printed
 */
void print_str(va_list argument)
{
	char *str;

	str = va_arg(argument, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - Prints anything passed as argument
 * @format: List of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	print types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	va_list args;
	int i, j = 0;
	char *separator = "";

	va_start(args, format);
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (types[i].type != NULL)
		{
			if (format[j] == *(types[i].type))
			{
				printf("%s", separator);
				(types[i].func)(args);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(args);
	printf("\n");
}
