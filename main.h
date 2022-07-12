#ifndef main_h__
#define main_h__

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: strict that stores pointers to a
 * printer functions
 */

typedef struct specifier
{
	char *specifier;
	int (*f)(va_list, args);
} spc_dt;

int _printf(const char *format, ...);

#endif
