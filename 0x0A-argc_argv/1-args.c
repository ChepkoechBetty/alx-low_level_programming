#include <stdio.h>
#include "main.h"
/**
 * main - function main
 * @argc:parameter
 * @argv:parameter
 *
 * Return:Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void)argv;

	while (i < argc - 1)
	{
		i++;
	}
	printf("%d\n", i);

	return (0);
}
