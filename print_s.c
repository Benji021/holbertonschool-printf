#include "main.h"
#include <stdarg.h>

/**
 * print_s - print chain in stdout
 * @args : argument
 * Return: 1 in sucess
*/

int print_s(va_list args)
{
	int i;
	char *str = va_args(args, char *);

	if (str == 0)
	str = "NULL";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (1);
}
