#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float *age, char *owner);

/**
* _strlen -> finds the lenght of string
* @str: string to be measured
*
* Return: length of string
*/
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
* _strcopy -> copies a string
* @dest: buffer storing the string copy
* @src: the source string
*
* Return: pointer to dest
*/
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
* new_dog -> create a new dog
* @name: name
* @age: age
* @owner: owner
*
* Return: the new struct dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL && age < 0 && owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	(*doggo).name == malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*doggo).name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	(*doggo).owner == malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*doggo).owner == NULL)
	{
		free((*doggo).name);
		free(doggo);
		return (NULL);
	}

	(*doggo).name = _strcopy((*doggo).name, name);
	(*doggo).age = age;
	(*doggo).owner = _strcopy((doggo).owner, owner);
}
