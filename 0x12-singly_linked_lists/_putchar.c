#include <unistd.h>

/**
 * _putchar - writes the chrctr c to stdout
 * @c: The chrctr to print
 *
 * Rtrn: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
