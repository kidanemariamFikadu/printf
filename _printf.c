#include "main.h"
#include <stdlib>

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0;
	va_list arguments;
	char *buffer;

	va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);

	if (!format || !buffer || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] !=  '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				free(buffer);
				return (-1);
			}
			else
			{
				len++;
			} i++;
		} else
			len++;
	}
	free(buffer);
	return (len);
}
