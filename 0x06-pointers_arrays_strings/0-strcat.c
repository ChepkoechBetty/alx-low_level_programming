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
	char destn[] = dest;
	char srce[] = src;

	strcat(srce, destn);
	return (destn);
}
