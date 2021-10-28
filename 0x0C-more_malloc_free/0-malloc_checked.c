#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked- allocates memory with malloc
 *@b : number of bytes to allocate
 *Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	exit(98);
	return (ptr);
}
