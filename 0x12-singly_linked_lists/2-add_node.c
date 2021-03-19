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
 * add_node - check the code for Holberton School students.
 * @head: list_t
 * @str: Character
 * Return: .
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

/*1. Allocate node*/
	new_node = malloc(sizeof(list_t));
/*Return: the address of the new element, or NULL if it failed*/
	if (new_node == NULL)
		return (NULL);

/*2. Put in the data*/
	new_node->str = strdup(str);
	new_node->len = _strlen(str);

/*3. Make next of new node as head*/
	new_node->next = *head;

/*4. Move the head to point to the new node*/
	*head = new_node;

	return (new_node);
}

