#include "dog.h"
/**
 * new_dog - makes a new dog
 * @name: name to create mem and assign to for dog
 * @age: age to assign to for dog
 * @owner: owner to create mem and assign to for dog
 *
 * Return: pointer to new dog_t (struct dog)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	if (name == NULL)
		new->name = NULL;
	else
	{
		new->name = malloc(_strlen(name) + 1);
		if (new->name == NULL)
		{
			free(new);
			return (NULL);
		}
		new->name = _strcpy(new->name, name);
	}
	if (owner == NULL)
		new->owner = NULL;
	else
	{
		new->owner = malloc(_strlen(owner) + 1);
		if (new->owner == NULL)
		{
			free(new->name);
			free(new);
			return (NULL);
		}
		new->owner = _strcpy(new->owner, owner);
	}
	new->age = age;
	return (new);
}
/**
 * _strcpy - copies the string pointed to by src to buffer
 * @src: pointer to string
 * @dest: pointer to buffer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int len = _strlen(src);
int c;
for (c = 0; c <= len; c++)
dest[c] = src[c];
return (dest);
}
/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
int c = 0;
while (s[c] != '\0')
c++;
return (c);
}