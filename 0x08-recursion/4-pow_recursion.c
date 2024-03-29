#include "main.h"

/**
 * _pow_recursion - function that returns the value
 * @x: value to raise
 * @y: power
 *
 * Return: result of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
