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
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}
