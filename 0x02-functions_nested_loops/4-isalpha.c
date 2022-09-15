#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - Check for alphabets
 * @c:Parameter
 *
 * Return: Always 1 (Success) 0 (failure)
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0)
}
