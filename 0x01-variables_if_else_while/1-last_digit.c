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
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 3;
	lastn = n % 10;
	if (lastn > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n", n, lastn);
	}
	else if (lastn == 0)
	{
	printf("last digit of %d is %d and is 0\n", n, lastn);
	}
	else
	{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
	}
	return (0);
}
