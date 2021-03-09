#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - copies a struc
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: the copied struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog_reg;
	int i = 0, j = 0;
	char *aka, *master;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog_reg = malloc(sizeof(struct dog));
	if (new_dog_reg == NULL)
	{
		return (NULL);
	}
	while (name[i])
		i++;
	while (owner[j])
		j++;
	aka = malloc(i * sizeof(char) + 1);
		if (aka == NULL)
		{
			free(new_dog_reg);
			return (NULL);
		}
		master = malloc(j * sizeof(char) + 1);
		if (master == NULL)
		{
			free(aka);
			free(new_dog_reg);
			return (NULL);
		}
	aka = name;
	master = owner;
	new_dog_reg->name = aka;
	new_dog_reg->owner = master;
	new_dog_reg->age = age;
	return (new_dog_reg);
}
