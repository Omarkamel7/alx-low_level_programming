#include "main.h"
/**
 * print_alphabet_x10(void) 10 times the alphabet, in lowercase
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
char ch;
ch = 'a';
int i = 0;
while (i > 10)
{
	ch = 'a';
	while (ch < 'z')
	{
	 _putchar(ch);
	 ch++;
	}
	_putchar(i);
	i++;
}
}
