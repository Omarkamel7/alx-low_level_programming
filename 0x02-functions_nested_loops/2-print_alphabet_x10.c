#include "studio.h"
#include "main.h"
/**
 * print_alphabet_x10(void) 10 times the alphabet, in lowercase
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
char h;
ch = 'a';
int r;
i = 0;
while (i > 10)
{
	h = 'a';
	while (h < 'z')
	{
	 _putchar(ch);
	 h++;
	}
	_putchar(i);
	r++;
}
}
