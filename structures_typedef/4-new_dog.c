#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Function that creates a new dog
 * @name: New dog's name (string)
 * @age: New dog's age (float)
 * @owner: Dog owner's name (string)
 *
 * Return: Pointer to new dog on success, NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(strlen(name) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
				return (NULL);
				}

				new_dog->owner = malloc(strlen(owner) + 1);

				if (new_dog->owner == NULL)
				{
				free(new_dog->name);
				free(new_dog);
				return (NULL);
				}

				strcpy(new_dog->name, name);
				new_dog->age = age;
				strcpy(new_dog->owner, owner);

				return (new_dog);
				}
