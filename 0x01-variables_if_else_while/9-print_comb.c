#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 */

int main(void)
{
	int j;

	j = 48;
	while (j < 58)
	{
	putchar(j);
	if (j != 57)
	{
	putchar(44);
	putchar(32);
	/** combination*/
	}
	j++;
	}
	putchar('\n');
	return (0);
}
