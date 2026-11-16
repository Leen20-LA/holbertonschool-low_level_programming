#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL or malloc fails
 */

char *_strdup(char *str)
{
    char *dup;

    if (str == NULL)
    {
        return (NULL);
    }

    dup = malloc(sizeof(char) * (_strlen(str) + 1));
    if (dup == NULL)
    {
        return (NULL);
    }

    _strcpy(dup, str);
    return (dup);
}
