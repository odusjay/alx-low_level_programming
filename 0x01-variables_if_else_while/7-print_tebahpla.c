#include <stdio.h>

/**
 * main - print the letters of the alphabet
 * Description: print the letters of the alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	int j = 122;

	while (j > 96)
	{	
	putchar(j);
	j--;
	}
	putchar(10);
	return (0);

}
