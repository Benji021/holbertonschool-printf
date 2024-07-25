#include "main.h"

/**
 * _printf - function prints a strings and its arguments at a specific format
 * @format: is an array of characters
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int index, strFormat_leng = 0;
	va_list arguments_list;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(arguments_list, format);
	for (index = 0; format[index] != '\0'; index++)
	{
		/*
		 *  if format[index] is not the format specifier '%'
		 *  print format[index] and increment size of returned var by one
		 */
		if (format[index] != '%')
		{
			write(1, &format[index], 1);
			strFormat_leng++;
		}
		/*
		 * implicitely else means format[index] is the format specifier'%'
		 */
		else
		{
			/* Incrementing format to look for the data type to format */
			index++;

			/*
			 *  calling function handle format to execute formating
			 *  also adding size of the argument to the returned value
			 */
			strFormat_leng += handle_format(format[index], arguments_list);
		}
	}

	va_end(arguments_list);

	return (strFormat_leng);
}
