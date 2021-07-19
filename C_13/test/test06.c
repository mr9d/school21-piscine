#include <stdio.h>
#include <stdlib.h>
#include "../ex06/ft_btree.h"

void	btree_insert_data (t_btree **root,
			void *item, int (*cmpf)(void *, void *));
int		btree_level_count (t_btree *root);

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

void	test (t_btree *root)
{
	printf("List: ");
	print_btree_int(root);
	printf("\nDepth: %d\n", btree_level_count(root));
}

int	main(void)
{
	t_btree	*root;

	root = 0;
	test(root);
	add_int(&root, 11);
	test(root);
	add_int(&root, 10);
	add_int(&root, 11);
	add_int(&root, 5);
	add_int(&root, 1);
	add_int(&root, 15);
	add_int(&root, 3);
	add_int(&root, 4);
	test(root);
	return (0);
}
