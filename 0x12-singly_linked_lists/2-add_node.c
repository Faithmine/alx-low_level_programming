#include "lists.h"
#include <string.h>
/**
 * add_node - Adds a new_node node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new_node element.
 */
list_t *add_node(list_t **head, const char *str)
	{
	list_t *new_node;
	char *for_str;
	int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for_str = strfor(str);
	if (for_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
	
		len++;

	new_node->str = for_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
	}
