#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
*print_c- write to character c in stdout
*@args : variable argument list containing the character to print
*Return: 1 in sucess
*/

int print_c(va_list args)
{
	char str;

	str = va_arg(args, int);
	_putchar(str);
	return (1);
}
