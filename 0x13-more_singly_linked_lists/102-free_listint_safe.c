#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list
 * Return: no return
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list
 * @head: head of a list
 * Return: size of the list that was freed
 */
size_t free_listint_safe(const listint_t **h)
{
	size_t newnodes = 0;
	listp_t *ast, *new, *add;
	listint_t *curr;


	ast = NULL;
	while (h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)h;
		new->next = ast;
		ast = new;

		add = ast;

		while (add->next != NULL)
		{
			add = add->next;
			if (h == add->p)
			{
				*h = NULL;
				free_listp2(&ast);
				return (newnodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		newnodes++;
	}

	*h = NULL;
	free_listp2(&ast);
	return (newnodes);
}
