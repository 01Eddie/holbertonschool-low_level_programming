#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/*You have to store a copy of name and owner*/
/**
 * _strlen - short description, single line
 * @s: description of parameter s
 * Return: length of s
*/
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	return (count);
}
/**
 * _strcpy - short description, single line
 * @dest: character
 * @src: character
 * Return: dest + '\0'
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';

	return (dest);
}
/**
 * new_dog - structures of new_dog
 * @name: Character
 * @age: float
 * @owner: Character
 * Return: void or NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog;
	int lenN = 0;
	int lenO = 0;
	char *cname;
	char *cowner;

	dog = malloc(sizeof(struct dog));
/*Return NULL if the functions fails*/
	if (dog == NULL)
		return (NULL);
	if (name != NULL)
	{
		lenN = _strlen(name);
		cname = malloc(sizeof(char) * (lenN + 1));
		if (cname == NULL)
		{
			free(dog);
			return (NULL);
		}
		_strcpy(cname, name);
		dog->name = cname;
	}
	if (owner != NULL)
	{
		lenO = _strlen(owner);
		cowner = malloc(sizeof(char) * (lenO + 1));

		if (cowner == NULL)
		{
			free(cname);
			free(dog);
			return (NULL);
		}
		_strcpy(cowner, owner);
		dog->owner = owner;
	}
	dog->age = age;
	return (dog);
}
