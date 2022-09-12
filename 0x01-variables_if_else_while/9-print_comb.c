#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 */

int main(void)
{
	int n1 = 48;
	int n2;
	int comb = 44;

	while (n1 <= 57)
	{
	n2 = n1 + 1;
	while (n2 <= 57)
	{
	putchar(n1);
	putchar(n2);
	if (n1 != 55 || n2 != 56)
	{
	putchar(comb);
	/** combination*/
	}
	n2 += 1;
	}
	n1 += 1;
	}
	putchar('\n');
	return (0);
}
