#include "main.h"

/**
 * binary_to_uint - Cnvrts a binary nmbr to an unsigned int.
 * @b: Pointer to a string of '0' and '1' chars.
 *
 * Return: The cnvrtd nmber, or 0 if there is an invalid character or NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			result = (result << 1);
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (result);
}
