#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - checks that a string contains only digits
 * @s: the string to check
 *
 * Return: 1 if every character is a digit, 0 otherwise
 */
int is_positive_number(char *s)
{
	int i;

	if (s[0] == '\0')
		return (0);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - adds positive numbers passed as arguments
 * @argc: argument count, including the program name
 * @argv: argument vector; argv[1..] are the numbers
 *
 * Return: 0 on success, 1 if any argument contains a non-digit
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
