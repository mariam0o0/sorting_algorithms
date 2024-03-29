#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void shell_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void selection_sort(int *array, size_t size);
int partition(int *array, ssize_t start, ssize_t end, size_t size);
void Quik(int *array, ssize_t start, ssize_t end, int size);
void quick_sort(int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
#endif
