#include "lists.h"
/**
 * sum_dlistint : returns the sum of all the data (n) of a list
 * @head: pte to head of list
 * Return: sum of all the data (n) of a list
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
int sum = 0;

tmp = head;
while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
