#include "main.h"

/**
 * print_numbers - prints the numbers betwen and including 0 to 9 seperated by a new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
