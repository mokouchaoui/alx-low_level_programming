#include <stdio.h>

/**
 * main - prints the sum of all the multiple of 3
 * Description: or 5 below 1024 (excluded)
 * Return: value 0
 */

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
