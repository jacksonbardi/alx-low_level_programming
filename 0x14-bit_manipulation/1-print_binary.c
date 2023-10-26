#include "main.h"

/**
 * print_binary - Prnts the bnry rprsntton of a number.
 * @n: The number to be printed in binary.
 * Rtrn: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
