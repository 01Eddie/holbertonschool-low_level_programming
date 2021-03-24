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
	unsigned int count;
	listint_t *currentNode, *newNode;/*create our node*/

	if (head == NULL)
		return (NULL);
/*Holds a pointer to the 'next' field that we have to link to the new node*/
/*By initializing it to &head we handle the case of insertion at the*/
/*beginning*/
	/* listint_t **nextForPosition = &head; */
/* Iterate to get the 'next' field we are looking for.*/
/*Note: Insert at the end if position is larger than current number of*/
/*elements.*/
/*currentNode = &(*head)*/
	if (idx != 0)
	{
		currentNode = *head;
		for (count = 0; count < idx - 1 && currentNode != NULL; count++)
		{
			currentNode = currentNode->next;
		}
		if (currentNode == NULL)
			return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;/*Assign data(n)*/
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
