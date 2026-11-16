#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated memory
 * @s1: the first string (treated as "" if NULL)
 * @s2: the second string (treated as "" if NULL)
 *
 * Return: pointer to the new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
