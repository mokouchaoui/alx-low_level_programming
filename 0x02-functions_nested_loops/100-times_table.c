#include "main.h"

/**
 * print_times_table - prints n times table
 * Description: starting from 0
 * @n: funtion parameter
 * Return: void
 */

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; ++i)
		{
			_putchar('0');
			for (j = 1; j <= n; ++j)
			{
				mystyle(i * j);
			}
			_putchar('\n');
		}
	}
}

/**
 * mystyle - used to reduce the lines of the code
 * @n: parameter to work with
 * Return: void
 */
void mystyle(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10  + '0');
		_putchar(n % 10 + '0');
	}
}
