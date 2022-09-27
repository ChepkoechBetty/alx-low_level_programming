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
	char *res = haystack, *fn = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (res);
		}
		needle = fn;
		res++;
		haystack = res;
	}
	return (0);
}
