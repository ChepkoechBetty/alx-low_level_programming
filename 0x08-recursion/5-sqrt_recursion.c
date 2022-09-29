#include "main.h"
/**
 * _sqrt_recursion - sqrt
 * @n:parameter
 *
 * Return:square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_sqrt(1, n));
}
/**
 * check_sqrt - check sqrt
 * @k:parameter
 * @l:parameter
 *
 * Return:square root
 */
int check_sqrt(int k, int l)
{
	if (k * k == l)
		return (g);
	if (k * k > l)
		return (-1);
	return (sqrt_check(k + 1, l));
}
