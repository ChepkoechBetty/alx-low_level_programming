#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function
 * @argc:parameter
 * @argv:parameter
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int res, firstnum = 0, secondnum = 0;

	if (argc - 1 < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		firstnum = atoi(argv[1]);
		secondnum = atoi(argv[2]);
		res = firstnum * secondnum;
		printf("%d\n", res);
	}
	return (0);
}
