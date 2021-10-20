#include "main.h"
/**
 * isitprm - returns 1 if n is prime, 0 otherwise
 * @n: the prime or not number
 * @i: factor of n
 *
 *Return: return 1 if prime or 0 if not
 */
int isitprm(int i, int n)
{
if (n < 2)
return (0);
if (n % i == 0)
return (0);
if (i > n / 2)
return (1);
return (isitprm(i + 1, n));
}
/**
 * is_prime_number - returns 1 if prime, 0 otherwise
 * @n: the prime or not number
 *
 * Return: return 1 if n is prime 0 otherwhise
 */
int is_prime_number(int n)
{
	return (isitprm(2, n));
