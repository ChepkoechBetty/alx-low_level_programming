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
	char r[] = "";

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		if (strlen(r) > 0)
		{
			r[strlen(r)] = s[i];
		}
		else
		{
			r[0] = s[i];
		}
	}
	s = r;
}
