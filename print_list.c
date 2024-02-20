#include "sort.h"
/**
  * print_list - print a linked list
  * @list: pointer to the list
  *
  * Return: Nothing!
  */
void print_list(const listint_t *list)
{
	const listint_t *current = list;
	while (current != NULL)
	{
		printf("%d ", current->n);
		current = current->next;
	}
	printf("\n");
}
