#include "holberton.h"
/**
 * _abs - prints the last digit of a nummber
 * @n: test integer
 * Return: lastDigit of n
 */
int _abs(int n)
{
	int lastDigit;

	lastDigit = _abs((n % 10));
	_putchar(lastDigit + 48);
	return (lastDigit);
}
