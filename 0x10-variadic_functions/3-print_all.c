#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - prints anything
 *@format: is an constant and list of types of arguments
 */

void print_all(const char * const format, ...)
{
	all_form_str format_strc[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_str},
		{NULL, NULL}
	};
	int f, s;   /* f: for format; s: for struct */
	char *rec = "";  /* the receiver */
	char *sep = ", ";  /* for the separator */
	va_list type_ar;

	va_start(type_ar, format);

	f = 0;
	while (format != NULL && format[f] != '\0')
	{
		s = 0;
		while (format_strc[s].str != NULL)
		{
			if (format_strc[s].str[0] == format[f])
			{
				printf("%s", rec);
				format_strc[s].p_func(type_ar);
				rec = sep;
			}
			s++;
		}
		f++;
	}
	printf("\n");
	va_end(type_ar);
}

/**
 *p_char - print format type char
 *@type_ar: argument pointer variable of type va_list
 */

void p_char(va_list type_ar)
{
	int f = va_arg(type_ar, int);

	printf("%c", f);
}

/**
 *p_int - print format type integer
 *@type_ar: argument pointer variable of type va_list
 */

void p_int(va_list type_ar)
{
	int f = va_arg(type_ar, int);

	printf("%d", f);
}

/**
 *p_float - print format type float
 *@type_ar: argument pointer variable of type va_list
 */

void p_float(va_list type_ar)
{
	double f = va_arg(type_ar, double);  /* conversion float to double */

	printf("%f", f);
}

/**
 *p_str - print an string
 *@type_ar: argument pointer variable of type va_list
 */

void p_str(va_list type_ar)
{
	char *f = va_arg(type_ar, char *);

	if (f == NULL)   /* requirement condition */
	{
		f = "(nil)";   /* assignment */
	}
	printf("%s", f);
}
