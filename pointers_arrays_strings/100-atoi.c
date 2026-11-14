
#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer, or 0 if no digits found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int digit;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		if (sign == 1)
		{
			if (result > INT_MAX / 10 ||
			    (result == INT_MAX / 10 && digit > INT_MAX % 10))
				return (INT_MAX);
			result = result * 10 + digit;
		}
		else
		{
			if (result < INT_MIN / 10 ||
			    (result == INT_MIN / 10 && -digit < INT_MIN % 10))
				return (INT_MIN);
			result = result * 10 - digit;
		}
		i++;
	}

	return (result);
}
