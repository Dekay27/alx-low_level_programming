#include "holberton.h"

/**
 * print_alphabet - print the english alphabet
 * Return: NULL
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
