#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_name - print name function
 * @n:parameter
 */
void print_name(char *n)
{
	printf("%s\n", n);
}

/**
 * main - main method
 * @argc:parameter
 * @argv:parameter
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	print_name(argv[0]);
	return (0);
}
