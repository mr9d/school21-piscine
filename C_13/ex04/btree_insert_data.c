#include "ft_btree.h"

void	btree_insert_data (t_btree **root,
		void *item, int (*cmpf)(void *, void *))
{
	t_btree	*node;
	int		cmp_res;

	if (*root == 0)
	{
		node = btree_create_node(item);
		*root = node;
		return ;
	}
	cmp_res = cmpf((*root)->item, item);
	if (cmp_res == 0)
		return ;
	if (cmp_res > 0)
		btree_insert_data(&((*root)->left), item, cmpf);
	if (cmp_res < 0)
		btree_insert_data(&((*root)->right), item, cmpf);
}
