#include <stdio.h>
/**
 * main-prt the alphabet in lowecase,
 * only putchar is allowed
 * Return: 0
 */

int main(void)
{
	int l = 'a';

	while (l <= 'z')
	{
	putchar(l);
	l += 1;
	}
	putchar('\n');
	return (0);
}
