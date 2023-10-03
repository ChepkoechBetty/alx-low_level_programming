#include "main.h"
/**
 * _strchr - function that locates a char in a string
 * @s:Parameter
 * @c:Search char
 *
 * Return:Pointer to firts occurrence of c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
