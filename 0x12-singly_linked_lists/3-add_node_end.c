#include "lists.h"
#include <string.h>

/**
 *add_node_end - Adds a new node at the end of a list.
 *@head: A pointer to the head of the structure list_t list.
 *@str: string to be added to the structure list_t list.
 *
 *Return: If the function fails - NULL.
 *        Otherwise - Address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int length;
	list_t *newptr, *lastptr;

	newptr = malloc(sizeof(list_t));
	if (newptr == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(newptr);
		return (NULL);
	}

	length = 0;
	while (str[length])

		length++;

	newptr->str = duplicate;
	newptr->len = length;
	newptr->next = NULL;
	if (*head == NULL)
		*head = newptr;

	else
	{
		lastptr = *head;
		while (lastptr->next != NULL)
			lastptr = lastptr->next;
		lastptr->next = newptr;
	}

	return (*head);
}
