#include <stdarg.h>
#include <stdio.h>
/**
 * _strlen - Calculates length of a string
 * @str: String
 *
 * Return: Length of string
 */
int _strlen(const char * const str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * print_all - Prints anything passed as argument
 * @format: List of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int n, i = 0;
	char c;

	n = _strlen(format);
	va_start(args, format);
	while (i < n)
	{
		c = format[i];
		if (i != 0 && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");
		switch (c)
		{
			case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			break;
		default:
			break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
