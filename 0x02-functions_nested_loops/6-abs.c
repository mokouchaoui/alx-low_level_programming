#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: is a integer parameter
 * Return: Absolute value of an integer n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
