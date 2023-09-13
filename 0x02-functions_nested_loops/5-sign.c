#include "main.h"

/** 
 * print_sign - Prints the sign of a number
 * @n: The number to be printed
 *
 * Return: 1 if greater than zero, zero if zero, -1 if less tha zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
