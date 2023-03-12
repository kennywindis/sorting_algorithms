#include "sort.h"

/**
 * cocktail_sort_list - function that sorts a linked list using coctail
 * @list: pointer to first node in linked list
 */
void cocktail_sort_list(listint_t **list);
{
	listint_t *cursor;
	int cont = 1;

	if (list == NULL || *list == NULL)
		return;

	while (cont != 0)
	{
		cont = 0;
		for (cursor = *list; cursor->next != NULL; cursor = cursor->next)
		{
			if (cursor->n > cursor->next->n)
			{
				swap_forward(&cursor, list);
				cont++;
			}
		}
		for (; cursor->prev != NULL; cursor = cursor->prev)
		{
			if (cursor->n < cursor->prev->n)
			{
				swap_backward(&cursor, list);
				cont++;
			}
		}
	}
}
