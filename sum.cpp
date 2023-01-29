#include "main.hpp"
/**
 * sumRecursive - sum two integers
 * @x: first int
 * @y: second int
 * Return: sum
 */
int sumRecursive(int x, int y)
{
	if (y == 0)
		return (x);
	return (1 + sumRecursive(x, y - 1));
}

