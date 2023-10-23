#include <unistd.h>

/**
 * _putchar - creates the character c to stdout
 * @c: The chrcter to print
 *
 * Rtrn: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
