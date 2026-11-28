#include <stdio.h>

/**
 * main - prints the name of the program, followed by a new line
 * @argc: argument count (unused)
 * @argv: argument vector; argv[0] is the program name as invoked
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
