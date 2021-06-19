#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates random number and displays whether number is positive, zero
 * Return: 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;
	printf("%i ", n);
	if (lastDigit > 0)
		printf("is positive\n");
	else if (lastDigit == 0)
		printf("is zero\n");
	else
		printf("is negative\n");
	return (0);
}
