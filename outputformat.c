#include "main.h"

/**
* handle_character - prints 1 character
* @arguments_list: is a list of argument to check
* Return: number of character printed
*/

int handle_character(va_list arguments_list)
{
	char c = va_arg(arguments_list, int);

	write(1, &c, 1);
	return (1);
}

/**
 * handle_integer - prints integers
 * @arguments_list: is a list of argument to check
 * Return: number of characters printed
 */

int handle_integer(va_list arguments_list)
{
	int len_integer;
	int integer = va_arg(arguments_list, int);

	/* Variable will store the string values as integers */
	char buffer[50];

	sprintf(buffer, "%d", integer);

	/* now we need to retrieve the number of integers stored */
	len_integer = strlen(buffer);
	write(1, buffer, len_integer);
	return (len_integer);
}


/**
 * handle_percent - prints integers
 * Return: number of characters printed
 */

int handle_percent(void)
{
	write(1, "%", 1);
	return (1);
}

/**
 * handle_string - prints a string of characters
 * @arguments_list: is a list of argument
 * Return:number of characters printed
 */

int handle_string(va_list arguments_list)
{
	char *string = va_arg(arguments_list, char*);
	int len_string;

	if (string == NULL)
		string = "(null)";
	len_string = strlen(string);
	write(1, string, len_string);
	return (len_string);
}
