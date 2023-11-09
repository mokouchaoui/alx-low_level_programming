#include "lists.h"

/**
 * add_dnodeint_end _ add new node in the end of the list
 * @head: head of the list
 * @n: The value of the new node
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *tmp;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
new->prev = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new;
new->prev = tmp;
return (new);
}