#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lower case
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	i = 0;
	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; ++j)
		{
			_putchar(j);
		}
		++i;
		_putchar('\n');
	}
}
