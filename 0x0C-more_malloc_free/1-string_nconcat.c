#include "main.h"
#include <stdlib.h>

/**
  * *string_nconcat - concatenates two strings.
  * @s2: string to concatenate from
  * @s1: character to append to
  * @n: integer
  * Return: null or otherwise a pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	concatenated = malloc(sizeof(char) * (len1 + n + 1));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < n; j++)
		concatenated[i + j] = s2[j];
	concatenated[i + j] = '\0';
	return (concatenated);
}
