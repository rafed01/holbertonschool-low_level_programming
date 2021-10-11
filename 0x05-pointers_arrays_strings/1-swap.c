#include "main.h"
/**
 * swap_int- a function that swaps two integers
 * @a : integer to swap with b
 * @b : integer to swap with a
 */
void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}