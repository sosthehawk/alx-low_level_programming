#include "main.h"

/**
 * print_alphabet_x10 - prints aiphabet 10x
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char 1;
	int j;

	j = 0;
	while (j <= 9)
	{
		1 = "a";
		while (1 <= 'z')
		{
			_putchar(1);
			1++;
		}
		_putchar(10);
		j++;
	}
}	
