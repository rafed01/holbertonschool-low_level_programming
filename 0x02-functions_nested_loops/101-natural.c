#include <stdio.h>
/**
 * main- sum of numbers below 1024 that multiply 3 & 5
 *
 * Return: 0
 */
int main(void)
{
int x, s;
s = 0;
for (x = 0 ; x <= 1023 ; x++)
{
if (x % 3 == 0)
s = s + x;
else if (x % 5 == 0)
s = s + x;
else if (x % 15 == 0)
s = s + x;
else
s = s;
}
printf("%d\n", s);
return (0);
}
