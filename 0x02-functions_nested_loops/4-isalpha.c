#include "main.h"
/**
 * _islower- check for lowercase
 *
 * @c: an integer
 *
 * Return: 1 if c is lowercase 0 if c is not
 */
int _isalpha(int c)
{
if (c <= 'z' && c >= 'a') || (c < 'z' && c > 'a')
return (1);
else
return (0);
}
