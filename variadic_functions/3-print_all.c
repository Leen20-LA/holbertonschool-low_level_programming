#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything based on a format string
 * @format: list of types of arguments passed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	int printed = 0;
	char *str, *nil = "(nil)", *empty = "";

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			if (printed++) printf(", ");
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			if (printed++) printf(", ");
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			if (printed++) printf(", ");
			printf("%f", va_arg(args, double));
			break;
		case 's':
			if (printed++) printf(", ");
			str = va_arg(args, char *);
			while (str == NULL)
			{
				printf("%s", nil);
				str = empty;
			}
			printf("%s", str);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
