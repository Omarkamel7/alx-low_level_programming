#include "main.h"
/**
 * print_alphabet_x10(void) 10 times the alphabet, in lowercase
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
char h;
h = 'a';
int i;
for (i = 0; i < 10; i++)
{
_putchar(h);
h++;
}
}
