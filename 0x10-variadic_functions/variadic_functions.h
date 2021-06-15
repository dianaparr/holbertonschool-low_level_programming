#ifndef HEADER_H
#define HEADER_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 *struct all_form - struct all formats
 *
 *@str: The operator
 *@p_func: The associated functions
 */

typedef struct all_form
{
	char *str;    /* to first obligatory argument */
	void(*p_func)();  /* to the different functions */
} all_form_str;

void p_char(va_list type_ar);
void p_int(va_list type_ar);
void p_float(va_list type_ar);
void p_str(va_list type_ar);

#endif /* HEADER_H */
