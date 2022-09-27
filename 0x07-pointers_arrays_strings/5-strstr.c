#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack:Parameter
 * @needle:Parameter
 *
 * Return:a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *needle)
		{
			char *ptr = _strstr(haystack + i + 1, needle + 1);

			return ((ptr) ? ptr - 1 : NULL);
		}
	}
	return (NULL);
}
