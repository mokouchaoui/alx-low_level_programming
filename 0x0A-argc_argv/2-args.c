#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: Argument vector for values
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
