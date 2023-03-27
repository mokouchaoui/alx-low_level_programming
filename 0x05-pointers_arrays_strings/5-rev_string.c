#include "holberton.h"
/**
* rev_string - prints a string in reverse
* @str: string input
*/
void rev_string(char *str)
{
	int i, icr, swap, temp;

	i = icr = 0;

	while (str[icr] != '\0')
		icr++;
	icr--;

	while (i < icr)
	{
		swap = str[i];
		temp = str[icr];
		str[i] = temp;
		str[icr] = swap;
		i++;
		icr--;
	}
}
