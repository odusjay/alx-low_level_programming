#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 */

int main(void)
{
	int n1 = 48;
	int comb = 24;
	while (n1 <= 57)
	{
	putchar(n1);
	if (n1 != 55)
	{
	putchar(comb);
	putchar(30);
	/** combination*/
	}
	n1 += 1;
	}
	putchar('\n');
	return (0);
}
