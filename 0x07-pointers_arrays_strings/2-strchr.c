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
	int l;
	int i;

	l = strlen(s);

	for (i = 0; i < l; i++)
	{
		if (s[i] == c)
		{
			return (c);
		}
	}
	return (NULL);
}
