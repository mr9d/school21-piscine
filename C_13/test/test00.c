#include <stdio.h>
#include <stdlib.h>
#include "../ex00/ft_btree.h"

t_btree	*btree_create_node (void *item);

void	print_btree_int (t_btree *elem)
{
	if (elem == 0)
	{
		printf("(null)");
		return ;
	}
	printf("(");
	if (elem->left != 0)
		print_btree_int(elem->left);
	if (elem->item == 0)
		printf("null");
	else
		printf("%d", *(int *)(elem->item));
	if (elem->right != 0)
		print_btree_int(elem->right);
	printf(")");
}

t_btree	*create_int (int i)
{
	int	*item;

	item = malloc(sizeof(*item));
	*item = i;
	return (btree_create_node(item));
}

int	main(void)
{
	t_btree	*head;

	head = 0;
	print_btree_int(head);
	printf("\n");
	head = create_int(5);
	print_btree_int(head);
	printf("\n");
	head->left = create_int(1);
	print_btree_int(head);
	printf("\n");
	head->right = create_int(55);
	print_btree_int(head);
	printf("\n");
	return (0);
}
