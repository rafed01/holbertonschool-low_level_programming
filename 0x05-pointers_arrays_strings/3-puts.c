#include "main.h"
/**
 * _puts- print a string
 * @str : string to print
 */
void _puts(char *str)
{
while (*str)
putchar(*str++);
putchar('\n');
}
