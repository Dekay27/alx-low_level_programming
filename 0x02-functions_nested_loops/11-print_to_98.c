#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print from any integer to 98
 * @n: start integer
 * Return: NULL
 */
void print_to_98(int n)
{
	int k;

	if (n <= 98)
	{
		for (k = n; k < 98; k++)
		{
			printf("%i, ", k);
		}
	}
	else
	{
		for (k = n; k > 98; k--)
		{
			printf("%i, ", k);
		}
	}
	printf("98\n");
}
