#include "main.h"
/**
 * _strncat - Concatenates to a number of chars
 * @dest: parameter
 * @src:Parameter
 * @n:Parameter
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		j++;
		i++;
	}
	i = 0;

	while (*(src + i) != *(src + n))
	{
		*(dest + j) = *(src + i);
		i++;
		j++;
	}
	*(dest + j) = '\0';
	return (dest);
}
