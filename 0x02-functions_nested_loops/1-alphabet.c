#include "main.h"
/**
 *
 * print_alphabet - prints the alphabets in lower case
 *
 * Return: returns 0 if successful
 *
 */

void  print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{	
	_putchar(alphabet);

	}
	_putchar('\n');
}
