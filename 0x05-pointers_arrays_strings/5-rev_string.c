#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 *
 * @s:Parameter
 */
void rev_string(char *s)
{
	int i;
	int len;
	char *r;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		if (strlen(r) > 0)
		{
			r = r + s[i];
		}
		else
		{
			r = s[i];
		}
	}
	s = r;
}
