#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments.
 * @argc: argument count
 * @argv: Argument vector for values
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	argc--;
	printf("%d\n", argc);
	return (0);
}
