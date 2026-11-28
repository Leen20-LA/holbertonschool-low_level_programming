#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything based on format string
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
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
		{
			if (printed == 1)
				printf(", ");
			printed = 1;

			switch (format[i])
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
					while (str == NULL)
					{
						printf("%s", nil);
						str = empty;
					}
					printf("%s", str);
					break;
			}
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
