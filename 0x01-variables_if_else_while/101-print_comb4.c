#include <stdio.h>

/**
 * main - prints out all possible combinations of three digits
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; j < 58; j++)
	{
		for (j = i; j < 58; j++)
		{
			for (k = j; k < 58; k++)
			{
				if (i == j || j == k || i == k)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == 55 && j == 56 && k == 57)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
