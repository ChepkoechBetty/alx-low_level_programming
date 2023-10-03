#include "main.h"
/**
 * _strcmp - function
 * @s1: parameter
 * @s2: parameter
 *
 * Return: output
 */
int _strcmp(char *s1, char *s2)
{
	int i, o;

	i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0')
	{
		i++;
	}

	o = (*(s1 + i) - *(s2 + i));

	return (o);
}
