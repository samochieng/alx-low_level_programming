#include "main.h"

/**
* is_divisible - Checks if a number is divisible.
* @num: The number to be checked.
* @div: The divisor.
*
* Return: 0 if the number is divisible && 1 if the number is not divisible
*/
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
* is_prime_number -> determines if the input integer is a prime number
* @n: parameter to be checked
*
* Return: 0 if n is not prime && 1 if n is prime
*/
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
