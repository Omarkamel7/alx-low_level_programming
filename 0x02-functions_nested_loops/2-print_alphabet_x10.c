#include "main.h"
/**
 * print_alphabet_x10(void) 10 times the alphabet, in lowercase
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
char h;
h = 'a';
int r;
r = 0;
while (r > 10)
{
	h = 'a';
	while (h < 'z')
	{
	 _putchar(h);
	 h++;
	}
	_putchar(r);
	r++;
}
}
