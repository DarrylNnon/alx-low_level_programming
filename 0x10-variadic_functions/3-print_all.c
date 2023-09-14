#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * Author: Darryl Nnon
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int b = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[b])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[b] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[b])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = 1;
			break;
		case 's':
			str = va_arg(valist, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} b++;
	}
	printf("\n"), va_end(valist);
}
