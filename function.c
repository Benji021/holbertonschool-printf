#include "main.h"


void _printchar(char c)
{
	putchar(c);
}

void _printstring(const char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
}
