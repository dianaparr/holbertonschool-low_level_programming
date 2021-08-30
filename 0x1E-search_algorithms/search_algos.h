#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int right_elm, int left_elm);

#endif /* HEADER_H */
