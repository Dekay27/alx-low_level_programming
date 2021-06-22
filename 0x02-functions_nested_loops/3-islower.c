#include "holberton.h"
/**
 * _islower - chaecker for whether lowercase or not
 * Return: 0 or 1
 */
int _islower(int c)
{
	c = (c >= 97 && c <= 122);
	return (c);
}
