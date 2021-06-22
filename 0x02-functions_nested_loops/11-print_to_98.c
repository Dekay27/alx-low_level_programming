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
		for (i = n; i < 98; i++)
		{
			printf("%i, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
	}
	printf("98\n");
}
