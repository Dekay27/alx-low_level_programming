#include "holberton.h"
/**
 * print_sign - returns 1 if n is positive, -1 if negative and 0 if otherwise
 * @n: interger to be testes
 * Return: 1, -1 or 0
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
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
