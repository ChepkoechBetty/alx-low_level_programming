#include "main.h"
/**
 * is_prime_number - Check if a number is prime
 * @n:parameter
 * Return:returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	int i;

	for(i = 2 ; i <= n / 2 ; i++)
	{
		if(n % i == 0)
		{
			return (0);
		}
		return (1);
	}
	return 0;
}

