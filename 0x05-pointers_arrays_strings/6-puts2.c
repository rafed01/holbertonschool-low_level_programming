#include "main.h"
/**
 * puts2 - prints a string
 * @str: pointer to string
 */
void puts2(char *str)
{
int c;
int len = _strlen(str);
for (c = 0; c < len; c += 2)
putchar(str[c]);
putchar('\n');
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
