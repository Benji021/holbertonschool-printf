#include "main.h"



int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	if (format == NULL)
	{
		va_end(args);
		return (-1);
	}
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				_printchar(va_arg(args, int));
			}
			if (*format == 's')
			{
				_printstring(va_arg(args, char*));
			}
			if (*format == '%')
			{
				_printchar(va_arg(args, int));
			}
			if (*format != 'c' || *format != 's' || *format != '%')
			{
				_printchar('E');
				return(-1);
			}
		}
		else
		{
			_printchar(*format);
		}
		format++;
	}
	va_end(args);
	return (0);
}
