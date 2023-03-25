#include <stdio.h>
#include "main.h"

/**
 *  * main - This prints _putchar, followed by a new line
 *   *
 *    * Return: The value 0
 *     
*/

int main(void)
{
	char my_word[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;
	
	for (i = 0; i < 8; ++i)
	{
		_putchar(my_word[i]);
	}
	_putchar('\n');
	return (0);
}
