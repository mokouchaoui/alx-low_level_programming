#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to resulting string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	int dif = 0;

	while (s1[i] != 0 && s2[i] != 0)
	{
		dif = s1[i] - s2[i];
		if (dif != 0)
			break;
		i++;
	}

	return (dif);
}
