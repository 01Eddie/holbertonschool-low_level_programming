#include "lists.h"

/**
 * add_nodeint - check the code for Holberton School students.
 * @head: listint_t
 * @n: Constant Integer
 * Return: new_nodeInt
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodeInt;
	/*1. Allocate node*/
	new_nodeInt = malloc(sizeof(listint_t));
	/*Return: the address of the new element, or NULL if it failed*/
	if (new_nodeInt == NULL)
		return (NULL);

	/*2. Put in the data*/
	new_nodeInt->n = n;
	/*3. Make next of new node as head*/
	new_nodeInt->next = *head;
	/*4. Move the head to point to the new node*/
	*head = new_nodeInt;

	return (new_nodeInt);
}
