#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    strand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n < 0)
        printf("is negative", n);
    else if (n == 0)
        printf("is zero", n);
    else
        printf("is positive",n)

return (0);
}
