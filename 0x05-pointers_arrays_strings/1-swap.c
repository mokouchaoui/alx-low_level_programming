#include "holberton.h"
/**
* swap_int - swaps the value of a and b
* @a: value at a
* @b: value at b
*/
void swap_int(int *a, int *b)
{
	int aval, bval;

	bval = *b;
	aval = *a;

	*a = bval;
	*b = aval;
}
