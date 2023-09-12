#include "main.h"

/**
  * print_sign - prints the sign of a number.
  * @n: the sign of number to be decision make.
  * Return: return 1 if n is > zero,
  * 0 if n is == zero, -1 if n is < zero.
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	_putchar(45);
	return (-1);
}

