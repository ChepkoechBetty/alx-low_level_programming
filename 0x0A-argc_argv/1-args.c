#include <stdio.h>
#include "main.h"
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
