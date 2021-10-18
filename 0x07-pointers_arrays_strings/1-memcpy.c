#include "main.h"
/**
 * _memcpy- copies memory area
 * @dest: string to copy to 
 * @src: string to copy from
 * @n: how many chars to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; i <= n; i++)
{
dest[i] = src[i];
}
return(dest);
}
