#include "main.h"
/**
 * _strlen- display length of a string
 * @s : string to mesure
 *
 * Return: len
 */
int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}
