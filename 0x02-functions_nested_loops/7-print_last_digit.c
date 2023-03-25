#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is an integer parameter
 * Return: last digit of number n
 */

int print_last_digit(int n)
{
	int ld;

	if (n > 0)
	{
		ld = (n % 10);
	}
	else
	{
		ld = (n % 10) * -1;
	}
	_putchar((ld % 10) + '0');
	return (ld % 10);
}
