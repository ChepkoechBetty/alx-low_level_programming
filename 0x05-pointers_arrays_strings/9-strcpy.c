#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copying
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
