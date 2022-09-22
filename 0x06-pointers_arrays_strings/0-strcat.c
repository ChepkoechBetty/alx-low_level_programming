#include <string.h>

/**
 * _strcat - concatenates string
 * @dest: destination
 * @src:source
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(src, dest);
	return (dest);
}
