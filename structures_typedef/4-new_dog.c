#include "dog.h"
#include <stdlib.h>

/**
 * my_strlen - Custom fucntion to calculate string lenght
 * @str: Input string
 *
 * Return: Lenght of the string
 */

int my_strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * my_strcpy -  Custom function that copies a string
 * @src: Pointer to the source
 * @dest: Destination the string will be copied to
 *
 * Return: Copied string in new location
 */

void my_strcpy(char *dest, const char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

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


	new_dog->name = malloc(my_strlen(name) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(my_strlen(owner) + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	my_strcpy(new_dog->name, name);
	new_dog->age = age;
	my_strcpy(new_dog->owner, owner);

	return (new_dog);

}
