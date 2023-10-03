#include "main.h"
#include <stdlib.h>
/**
 * create_array - method to create array
 * @size:parameter
 * @c:parameter
 *
 * Return:a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
