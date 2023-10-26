#include "main.h"

/**
 * flip_bits - Returns the nmbr of bits needed
 * to flip to get from one nmbr to another.
 * @n: The first nmbr.
 * @m: The second nmbr.
 *
 * Return: The nmbr of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
