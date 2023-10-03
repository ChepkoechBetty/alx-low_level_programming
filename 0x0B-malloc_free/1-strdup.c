#include "main.h"
#include <stdlib.h>
/**
 * _strdup - method
 * @str:parameter
 *
 * Return:returns a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int size = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}
	dup = malloc(sizeof(char) * (size + 1));

	if (dup == NULL)
		return (NULL);
	while (i < size)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
