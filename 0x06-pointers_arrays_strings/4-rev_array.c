#include "main.h"

/**
 * reverse_array - reverse
 * @a : pointer to int params
 * @n : pointer to int params
 * Return: no
 */

void reverse_array(int *a, int n)
{
	int c;
	int d;
	int temp;

	c = 0;
	d = n - 1;

	while (c < d)
	{
		temp = a[c];
		a[c] = a[d];
		a[d] = temp;
		c++;
		d--;
	}
}
