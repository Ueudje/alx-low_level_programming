#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all - function that prints anything
  * @format: a list of types of arguments passed to the function
  *
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	va_list prt;
	unsigned int i = 0, j, c = 0;
	char *apa;
	const char t_arg[] = "cifs";

	va_start(prt, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(prt, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(prt, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(prt, double)), c = 1;
			break;
		case 's':
			apa = va_arg(prt, char *), c = 1;
			if (!apa)
			{
				printf("(nil)");
				break;
			}
			printf("%s", apa);
			break;
		} i++;
	}
	printf("\n"), va_end(prt);
}
