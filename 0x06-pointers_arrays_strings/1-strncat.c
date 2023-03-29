#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: dest string
 * @src: src string
 * @n: limit
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int s = 0, i = 0;

	while (*(dest + s) != 0)
	{
		s++;
	}
	while (*(src + i) != 0)
	{
		*(dest + s + i)	= *(src + i);
		if (i >= n)
			break;
		i++;
	}

	*(dest + s + i) = 0;
	return (dest);
}
