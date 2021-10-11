#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
int c;
for (c = 0; c =< n; c++)
{
printf("%d ,", *a[c]);
printf("\n");
}
