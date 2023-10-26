#include "main.h"

/**
 * get_bit - Rtrns the vlue of a bit at a given index.
 * @n: The nmbr to extrct the bit from.
 * @index: The indx of the bit to retrieve.
 *
 * Rtrn: The value of the bit at the given indx or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
