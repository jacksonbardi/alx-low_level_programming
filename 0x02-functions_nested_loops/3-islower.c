#include "main.h"

/**
  * _islower - checks for lowercase character
  * @c: is the char to be checked
  * Return: return 1 if c is lowercase otherwise 0
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

