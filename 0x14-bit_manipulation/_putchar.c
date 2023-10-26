#include <unistd.h>

/**
 * _putchar - writes the chrcter c to stdout
 * @c: The chrctr to print
 *
 * Rtrn: On success 1.
 * On error, -1 is rtrned, and errno is set apprpriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
