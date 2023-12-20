#include "main.h"

/**
 * print_alphabet_x10 - print function
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i;
	int count;

	for (count = 1 ; count <= 10 ; count++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}
