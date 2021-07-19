#include <stdio.h>
#include <stdlib.h>
#include "../ex04/ft_btree.h"

void	btree_insert_data (t_btree **root,
			void *item, int (*cmpf)(void *, void *));
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

int	cmp (void *v1, void *v2)
{
	int	i1;
	int	i2;

	i1 = *(int *)v1;
	i2 = *(int *)v2;
	return (i1 - i2);
}

void	add_int (t_btree **root, int i)
{
	int	*item;

	item = malloc(sizeof(*item));
	*item = i;
	return (btree_insert_data(root, item, &cmp));
}

void	test (t_btree **root, int i)
{
	printf("Adding %d\n", i);
	add_int(root, i);
	print_btree_int(*root);
	printf("\n");
}

int	main(void)
{
	t_btree	*root;

	root = 0;
	print_btree_int(root);
	printf("\n");
	test(&root, 10);
	test(&root, 5);
	test(&root, 0);
	test(&root, 7);
	test(&root, 20);
	test(&root, 20);
	test(&root, 11);
	return (0);
}
