#include "holberton.h"
/**
* puts_half - prints the second half of a string
* @str: input string
*/
void puts_half(char *str)
{
	int len, count;

	for (len = 0; str[len] != '\0'; len++)
	;

	count = ((len + 1) / 2);

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
