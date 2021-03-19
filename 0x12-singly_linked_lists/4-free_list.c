#include "lists.h"

/**
 * free_list - check the code for Holberton School students.
 * @head: list_t
 * Return: void.
 */
void free_list(list_t *head)
{
	/*deref head to get the real head*/
	list_t *actual_node;
	list_t *node;

	actual_node = head;
	while (actual_node != NULL)
	{
		node = actual_node->next;
		free(actual_node->str);
		free(actual_node);
		actual_node = node;
	}
/* Given a reference (pointer to pointer) to the head of a list and an int,*/
/*push a new node on the front of the list.*/
}

