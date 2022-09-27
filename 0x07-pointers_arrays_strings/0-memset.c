#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memset - fill memory
 * @s:Parameter
 * @b:Parameter
 * @n:Parameter
 *
 * Return:s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, 7);
	return (s);
}
