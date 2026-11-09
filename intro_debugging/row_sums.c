#include <stdio.h>

/**
 * row_sum - computes the sum of a row in a multiplication table
 * @row: the row number
 * @cols: the number of columns
 *
 * Return: the sum of the row
 */
int row_sum(int row, int cols)
{
	int c;
	int sum = 0;

	for (c = 1; c <= cols; c++)
	{
		sum += row * c;
	}
	return (sum);
}

/**
 * total_sum - computes the total sum of a multiplication table
 * @rows: the number of rows
 * @cols: the number of columns
 *
 * Return: the total sum of all elements
 */
int total_sum(int rows, int cols)
{
	int r;
	int total = 0;
	int current;

	for (r = 1; r <= rows; r++)
	{
		current = row_sum(r, cols);
		total += current;
	}
	return (total);
}
