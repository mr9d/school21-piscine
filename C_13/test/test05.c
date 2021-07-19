#include <stdio.h>
#include <stdlib.h>
#include "../ex05/ft_btree.h"

void	btree_insert_data (t_btree **root,
			void *item, int (*cmpf)(void *, void *));
void	*btree_search_item (t_btree *root,
			void *data_ref, int (*cmpf)(void *, void *));

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
	btree_insert_data(root, item, &cmp);
}

void	test (t_btree *root, int i)
{
	t_btree	*res;

	printf("List: ");
	print_btree_int(root);
	printf("\nLooking for: %d\n", i);
	res = (t_btree *)btree_search_item(root, &i, &cmp);
	printf("Result: ");
	print_btree_int(res);
	printf("\n");
}

int	main(void)
{
	t_btree	*root;

	root = 0;
	test(root, 5);
	add_int(&root, 11);
	test(root, 12);
	test(root, 11);
	add_int(&root, 10);
	add_int(&root, 11);
	add_int(&root, 5);
	add_int(&root, 1);
	add_int(&root, 15);
	add_int(&root, 3);
	add_int(&root, 4);
	test(root, 11);
	test(root, 15);
	test(root, 222);
	test(root, 10);
	return (0);
}
