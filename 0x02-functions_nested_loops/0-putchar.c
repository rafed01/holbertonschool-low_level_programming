#include <stdio.h>
/**
 * main- putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch[]="_putchar";
int i;
for (i = 0 ; i <= 9 ; i++ )
_putchar(ch[i]);
_putchar('\n');
return (0);
}
