#include "holberton.h"
/**
* _puts - prints a string
* @str: string input
*/
void _puts(char *str)
{
	unsigned int prnt;

	for (prnt = 0; str[prnt] != '\0'; prnt++)
		_putchar(str[prnt]);

	_putchar('\n');
}
