#include <stdio.h>

/**
 * sum_to_n - computes the sum of integers from 1 to n
 * @n: the last integer to include in the sum
 *
 * Return: the sum of all integers from 1 to n
 */
int sum_to_n(int n)
{
	int i;
	int sum = 0;

	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	return (sum);
}
