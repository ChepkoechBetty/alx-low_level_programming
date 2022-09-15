#include <stdio.h>
#include <unistd.h>
/**
 * print_sign - prin signs
 * @n: parameter
 *
 * Return: 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		write(1, "+", 1);
		return (1);
	}
	else if (n == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	else
	{
		write(1, "-", 1)
		return (1);
	}
}
