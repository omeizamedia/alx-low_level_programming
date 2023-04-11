#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @num: number to print in binary
 */
void print_binary(unsigned long int num)
{
	int i, count = 0;
	unsigned long int cur;

	for (i = 63; i >= 0; i--)
	{
		cur = num >> i;

		if (cur & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
