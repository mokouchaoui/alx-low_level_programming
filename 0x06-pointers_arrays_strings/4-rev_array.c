#include "holberton.h"
/**
 * reverse_array - concatenates two strings
 * @a: array
 * @n: number of elements in arr
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c2 = 0;

	while (c2 < n)
	{
		int t1 = a[c2];

		int t2 = a[n - 1];

		a[c2] = t2;
		a[n - 1] = t1;
		c2++;
		n--;
	}
}
