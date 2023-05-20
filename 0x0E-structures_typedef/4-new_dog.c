#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * *new_dog - initialize a variable of type struct dog.
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: return pointer struct dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_struct;
	int name_len, owner_len;

	dog_struct = malloc(sizeof(dog_t));
	if (dog_struct == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	dog_struct->name = malloc(sizeof(char) * (name_len + 1));
	dog_struct->owner = malloc(sizeof(char) * (owner_len + 1));
	if (dog_struct->name == NULL)
	{
		free(dog_struct);
		return (NULL);
	}
	if (dog_struct->owner == NULL)
	{
		free(dog_struct->name);
		free(dog_struct);
		return (NULL);
	}
	_strcpy(dog_struct->name, name);
	_strcpy(dog_struct->owner, owner);
	dog_struct->age = age;
	return (dog_struct);

}
