#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything inputed
 * @format: List of types of arguments to be passed
 */

void print_all(const char * const format, ...)
{
	int a = 0;
	char *str, *sep = "";

	va_list val;

	va_start(val, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", sep, va_arg(val, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(val, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(val, double));
					break;
				case 's':
					str = va_arg(val, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					a++;
					continue;
			}
			sep = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(val);
}
