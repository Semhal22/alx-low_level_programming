#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC
#include <stdarg.h>
/* Protypes of tasks included in the README.md */
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct print - Prints type with function
 * @type: type of argument where c(char) or other
 * @func: the function corresponding to the type
 */
typedef struct print
{
	char *type;
	void (*func)(va_list args);
} print;
#endif
