#include "main.hpp"
/**
 * powerRecursive - returns exponential
 * @x: base
 * @y: exponent
 * Returns: power
 */
int powerRecursive(int x, int y)
{
	if (y == 0)
		return (1);
	return (productRecursive(x, powerRecursive(x, y - 1)));
}

