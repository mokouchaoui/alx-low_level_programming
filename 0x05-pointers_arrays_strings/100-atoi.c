#include "holberton.h"
/**
* _atoi - convert a string to an integer
* @s: string
* Return: int
*/
int _atoi(char *s)
{
	unsigned int num = 0, min = 0, n;

	for (n = 0; !(s[n] >= '0' && s[n] <= '9') && s[n] != '\0'; n++)
	{
		if (s[n] == '-')
			min++;
	}
	for ( ; (s[n] >= '0' && s[n] <= '9') && s[n] != '\0'; n++)
		num  = (num * 10) + (s[n] - '0');

	return (min % 2 != 0 ? -num : num);
}
