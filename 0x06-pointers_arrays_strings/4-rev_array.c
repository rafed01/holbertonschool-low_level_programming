#include "main.h"
void reverse_array(int *a, int n)
{
int i, x, j = n;
for(j--, i = 0; a[i] < n / 2; i++, j--  )
{
x = a[i];
a[i] = a[j];
a[j] = x;
}
}
