#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - string len
 * @str: string
 * Return: len
 */
int _strlen(const char *str)
{
	len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcpy - copy string
 * @src: from
 * @dest: to
 * Return: dest
 */
int _strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - new dog rigister
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owmer == NULL)
	{
		free(dog->name);
		free dog;

		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
