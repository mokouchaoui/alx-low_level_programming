#include "main.h"

/**
 * _islower -  checks for lowercase character
 * @c: is an integer
 *
 * Return: 1 if int c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
