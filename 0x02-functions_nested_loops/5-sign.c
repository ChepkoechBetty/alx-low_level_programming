#include <stdio.h>
/**
 * print_sign - prin signs
 * @n: parameter
 *
 * Return: 1
 */
int print_sign(int n)
{
	if(n>0)
	{
		putchar('+1');
		return (1);
	}
	else if(n=0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-1');
		return (-1);
	}
}
