#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int handle_character(va_list arguments_list);
int handle_string(va_list arguments_list);
int handle_percent(void);
int handle_integer(va_list arguments_list);
int handle_format(char format, va_list arguments_list);

#endif
