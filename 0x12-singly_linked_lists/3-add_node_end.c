#include "lists.h"
/**
 * _strlen - short description, single line
 * @s: description of parameter s
 * Return: length of s
*/

int _strlen(const char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	return (count);
}

/**
 * add_node_end - check the code for Holberton School students.
 * @head: list_t
 * @str: Character
 * Return: NULL or new_node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *actual_node;

	actual_node = *head;
/*1. Allocate node*/
	new_node = malloc(sizeof(list_t));

/*Return: the address of the new element, or NULL if it failed*/
	if (new_node == NULL)
		return (NULL);

/*2. Put in the data*/
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
/*3. This new node is going to be the last node, so make next of it as NULL*/
	new_node->next = NULL;

/*4. If the Liked List is empty, then make the new node*/
	if (*head == NULL)
		*head = new_node;
	else
	{/*5. Else traverse till the last node as head*/
		while (actual_node->next != NULL)
			actual_node = actual_node->next;
	/*6. Change the next of last node*/
		actual_node->next = new_node;
	}

	return (new_node);
}
