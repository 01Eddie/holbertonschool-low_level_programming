#include "lists.h"

/**
 * insert_nodeint_at_index - check the code for Holberton School students.
 * @head: listint_t
 * @idx: Unsigned Integer
 * @n: Integer
 * Return: *head
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	/*create our node*/
	listint_t *currentNode;

	if (*head == NULL)
		return (NULL);
	/*Check for success of malloc() here! */
	currentNode = malloc(sizeof(*currentNode));

	if (currentNode == NULL)
		return (0);

	/*Assign data(n)*/
	currentNode->n = n;
/*Holds a pointer to the 'next' field that we have to link to the new node*/
/*By initializing it to &head we handle the case of insertion at the*/
/*beginning*/
	/* listint_t **nextForPosition = &head; */
/* Iterate to get the 'next' field we are looking for.*/
/*Note: Insert at the end if position is larger than current number of*/
/*elements.*/
	for (; count < idx && *head != NULL; count++)
	{
/*nextForPosition is pointing to the 'next' field of the node.*/
/*So *nextForPosition is a pointer to the next node.*/
/*Update it with a pointer to the 'next' field of the next node.*/
		head = &(*head)->next;
	}
/*Here, we are taking the link to the next node (the one our newly inserted*/
/*node should point to) by dereferencing nextForPosition, which points to*/
/*the 'next' field of the node that is in the position we want to insert our*/
/*node at.*/
/*We assign this link to our next value.*/
	currentNode->next = *head;
/*Now, we want to correct the link of the node before the position of our*/
/*new node: it will be changed to be a pointer to our new node.*/
	*head = currentNode;

	return (*head);
}
