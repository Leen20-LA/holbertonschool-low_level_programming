#include <stdio.h>

/**
 * print_table - prints a multiplication table of a given size
 * @size: the size of the table
 *
 * Return: void
 */
void print_table(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			printf("%d ", row * col);
		}
		printf("\n");
	}
}
