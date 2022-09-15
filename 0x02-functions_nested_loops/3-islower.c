#include <stdio.h>
#include <ctype.h>
/**
 * _islower - Check for lower case character
 * c:Paremeter
 *
 * Return: Always (1) success (0) failure
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
