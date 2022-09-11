#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-assign a random number to the variable n
 * The string Last digit of n
 * Return: 0
 */

int main(void)
{
	int n;
	int ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ln = n % 10;
	if (ln > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n", n, ln);
	}
	else if (ln == 0)
	{
	printf("last digit of %d is %d and is 0\n", n, ln);
	}
	else if (ln < 6 && ln != 0)
	{
	printf("last digit of %d is %d and is less 6 and not 0\n", n, ln);
	}
	return (0);
}
