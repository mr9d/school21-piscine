#include <stdio.h>
#include <stdlib.h>
#include "../ex03/ft_btree.h"

void	btree_apply_suffix (t_btree *root, void (*applyf)(void *));
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

void	af (void *item)
{
	int	i;

	i = *(int *)(item);
	printf("Apply: %d\n", i);
}

t_btree	*create_int (int i)
{
	int	*item;

	item = malloc(sizeof(*item));
	*item = i;
	return (btree_create_node(item));
}

void	test (t_btree *head)
{
	print_btree_int(head);
	printf("\n");
	btree_apply_suffix(head, &af);
}

int	main(void)
{
	t_btree	*head;

	head = 0;
	test(head);
	head = create_int(5);
	test(head);
	head->left = create_int(1);
	test(head);
	head->right = create_int(55);
	test(head);
	head->right->left = create_int(25);
	test(head);
	return (0);
}
