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
	int j;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		for (j = len - 1; j >= 0; j--)
		{
			char oldi;
			char oldj;

			oldi = s[i];
			oldj = s[j];
			s[i] = oldj;
			s[j] = oldi;
		}
	}
}
