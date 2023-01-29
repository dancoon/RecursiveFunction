#include "main.hpp"
/**
 * gcd - returns gcd of two numbers
 * @x: first int
 * @y: second int
 * Return: gcd
 */
int gcd(int x, int y)
{
	if (x == 0)
		return (y);
	return (gcd(y % x, x));
}

