#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: the dog's name (will be copied)
 * @age: the dog's age
 * @owner: the dog's owner (will be copied)
 *
 * Return: pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_len = 0;
	int owner_len = 0;
	int i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	while (name[name_len] != '\0')
		name_len++;
	while (owner[owner_len] != '\0')
		owner_len++;

	d->name = malloc(sizeof(char) * (name_len + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		d->name[i] = name[i];

	d->owner = malloc(sizeof(char) * (owner_len + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= owner_len; i++)
		d->owner[i] = owner[i];

	d->age = age;

	return (d);
}
