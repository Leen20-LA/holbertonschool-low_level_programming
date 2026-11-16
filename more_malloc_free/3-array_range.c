#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max (inclusive)
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int count;
	int i;

	if (min > max)
		return (NULL);

	count = max - min + 1;

	arr = malloc(sizeof(int) * count);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
