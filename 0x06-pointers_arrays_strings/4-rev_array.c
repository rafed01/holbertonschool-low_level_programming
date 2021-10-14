#include "main.h"
void reverse_array(int *a, int n)
{
	int i, x, j = n;
while (a[j])
    j--;

	for (i = 0; i < n; i++)
		a[i] = a[j];
}
