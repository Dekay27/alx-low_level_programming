#include "holberton.h"
/**
 * times_table - prints out the 9 times table
 * Return: NULL
 */
{
	int i, j, prod;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				continue;
			}
			prod = i * j;
			_putchar(',');
			_putchar(' ');
			if (prod >= 10)
			{
				_putchar(prod / 10 + 48);
				_putchar(prod % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(prod + 48);
			}
		}
		_putchar('\n');
	}
}
