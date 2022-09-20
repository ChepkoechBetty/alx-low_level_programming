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
	strcpy(src, dest);
	return ((char *)dest);
}
