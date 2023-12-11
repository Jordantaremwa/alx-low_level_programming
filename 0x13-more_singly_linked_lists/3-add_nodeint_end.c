#include	"lists.h"

/**
 * add_nodeint_end	-	adds	a	new	node	at	the	end
 * @head:	a	pointer	to	the	address	of	the	head	of	the	listint_t	list
 * @n:	the	integer	for	the	new	node	to	contain
 * Return:	if	the	function	fails	-	NULL
 * otherwise	-	the	address	of	the	new	element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*new_node,	*temp;

	new_node	=	malloc(sizeof(listint_t));
	if	(new_node	==	NULL)
		return	(NULL);

	new_node->n	=	n;
	new_node->next	=	NULL;

	if	(*head	==	NULL)
	{
		*head	=	new_node;
		return	(new_node);
	}

	temp	=	*head;

	while
	{
		(temp->next	!=	NULL)
			temp	=	temp->next;

		temp->next	=	new_node;
	}

	return	(new_node);
}
