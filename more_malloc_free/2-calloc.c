#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc and sets it to zero
 * @nmemb: the number of elements
 * @size: the size of each element in bytes
 *
 * Return: pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	if (size != 0 && total / size != nmemb)
		return (NULL);

	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	p = (char *)ptr;
	for (i = 0; i < total; i++)
		p[i] = 0;

	return (ptr);
}
