
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int start;

	while (str[len] != '\0')
	{
		len++;
	}

	start = len / 2;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
