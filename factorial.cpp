#include "main.hpp"
/**
 * fact - return factorial of a number
 * @n: number
 * Return: factorial
 */
int fact(int n)
{
	if (n == 0)
		return (1);
	return n * fact(n - 1);
}

