#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void selection_sort(int *array, size_t size);
int partition(int *array, ssize_t start, ssize_t end, size_t size);
void Quik(int *array, ssize_t start, ssize_t end, int size);
void quick_sort(int *array, size_t size);
#endif
