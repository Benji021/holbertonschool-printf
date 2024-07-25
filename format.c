#include "main.h"

/**
 * handle_format - uses if statement to retrive an associated function
 * @format: is a string of character
 * @arguments_list: is a list of symbole
 * Return: nmbr of char in format +  nmbr of char of associated func
 */

int handle_format(char format, va_list arguments_list)
{
	int strFormat_leng = 0;

	if (format == 'c')
	{
		strFormat_leng = strFormat_leng + handle_character(arguments_list);
	}
	else if (format == 's')
	{
		strFormat_leng = strFormat_leng + handle_string(arguments_list);
	}
	else if (format == '%')
	{
		strFormat_leng = strFormat_leng + handle_percent();
	}
	else if (format == 'd' || format == 'i')
	{
		strFormat_leng = strFormat_leng + handle_integer(arguments_list);
	}
	/*
	 * else if (format == 'p')
	 * {
	 * strFormat_leng = strFormat_leng + handle_pointer(arguments_list);
	 * }
	 */

	else
	{
		write(1, "%", 1);
		write(1, &format, 1);
		strFormat_leng = strFormat_leng + 2;
	}
	return (strFormat_leng);
}
