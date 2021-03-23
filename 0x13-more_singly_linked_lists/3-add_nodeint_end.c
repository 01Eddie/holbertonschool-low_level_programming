#include "lists.h"

/**
 * add_nodeint_end - check the code for Holberton School students.
 * @head: listint_t
 * @n: Constant Integer
 * Return: new_nodeInt
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodeInt;
	listint_t *actual_nodeInt;

	actual_nodeInt = *head;
	/*1. Allocate node*/
	new_nodeInt = malloc(sizeof(listint_t));
	/*Return: the address of the new element, or NULL if it failed*/
	if (new_nodeInt == NULL)
		return (NULL);
	/*2. Put in the data*/
	new_nodeInt->n = n;
	/*3. This new node is going to be the last node, so make next of it as NULL*/
	new_nodeInt->next = NULL;
	/*4. If the Linked List is empty, then make the new node*/
	if (*head == NULL)
		*head = new_nodeInt;
	else
	{/*5. Else traverse till the last node as head*/
		while (actual_nodeInt->next != NULL)
			actual_nodeInt = actual_nodeInt->next;
		/*6. Change the next of last node*/
		actual_nodeInt->next = new_nodeInt;
	}

	return (new_nodeInt);
}
