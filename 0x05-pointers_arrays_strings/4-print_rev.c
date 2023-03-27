#include "holberton.h"
/**
* print_rev - prints a string
* @s: string input
*/
void print_rev(char *s)
{
	unsigned int frst, scnd;

	for (frst = 0; s[frst] != '\0'; frst++)
	;

	for (scnd = frst; scnd != 0;)
	{
		_putchar(s[scnd - 1]);
		scnd--;
	}
	_putchar('\n');
}
