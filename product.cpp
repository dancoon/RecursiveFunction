#include "main.hpp"
/**
 * productRecursive - returns product of two int
 * @x: first int
 * @y: second int
 * Return: product
 */
int productRecursive(int x, int y)
{
	if (y == 0)
		return (0);
	return (sumRecursive(x, productRecursive(x, y - 1)));
}

