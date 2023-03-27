#include "holberton.h"
/**
* _strlen - returns the length of a string
* @s: string input
* Return: length of s
*/
int _strlen(char *s)
{
	unsigned int lngth = 0;

	if (s == NULL)
		return (0);
	for (lngth = 0; s[lngth] != '\0'; lngth++)
	;

	return (lngth);
}
