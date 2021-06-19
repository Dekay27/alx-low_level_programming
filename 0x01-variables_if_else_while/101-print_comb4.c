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

	for (i = '0'; i < '9'; i++)
	{
		for (j = i; j < '9'; j++)
		{
			for (k = j; k < '9'; k++)
			{
				if (i == j || j == k || i == k)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == '7' && j == '8' && k == '9')
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
