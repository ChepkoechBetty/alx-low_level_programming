#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_name(char *n)
{
	printf("%s\n", n);
}

int main(int argc, char *argv[])
{
	(void)argc;
	print_name(argv[0]);
	return (0);
}
