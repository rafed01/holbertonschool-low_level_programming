#include "main.h"
void reverse_array(int *a, int n)
{
	int i, j = n;
while (a[j])
   {
	    j--;

	for (i = 0; i < n; i++)
		a[i] = a[j];
}
a[i] = '\0';
}
