#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - function that prints strings, followed by a new line
  * @separator: string to be printed between strings
  * @n: number of integers passed to the function
  * @...: variable number of strings to be printed
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *apa;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		apa = va_arg(str, char *);

		if (apa)
			printf("%s", apa);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
