#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char s[] = "ROT13 (\"rotat by 13 plces\", smtmes hyphntd ROT-13) is a smple ltter sbstitutn cipher.\n";
char *p;

p = rot13(s);
printf("%s", p);
printf("------------------------------------\n");
printf("%s", s);
printf("------------------------------------\n");
p = rot13(s);
printf("%s", p);
printf("------------------------------------\n");
printf("%s", s);
printf("------------------------------------\n");
p = rot13(s);
printf("%s", p);
printf("------------------------------------\n");
printf("%s", s);
return (0);
}
