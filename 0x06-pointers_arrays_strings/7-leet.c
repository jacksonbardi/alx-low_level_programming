#include "main.h"

/**
  * *leet - encodes a string into 1337.
  * @str: string to be encoded
  * Return: encoded string
  */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_codes = "4433007711";
	int i;

	while (*ptr != '\0')
	{
		i = 0;

		while (leet_chars[i] != '\0')
		{
			if (*ptr == leet_chars[i])
			{
				*ptr = leet_codes[i];
				break;
			}
			i++;
		}
		ptr++;
	}
	return (str);
}
