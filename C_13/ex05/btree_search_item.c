#include "ft_btree.h"

void	*btree_search_item (t_btree *root,
		void *data_ref, int (*cmpf)(void *, void *))
{
	t_btree	*res;

	if (root == 0)
		return (0);
	res = btree_search_item(root->left, data_ref, cmpf);
	if (res != 0)
		return (res);
	if (cmpf(root->item, data_ref) == 0)
		return (root);
	res = btree_search_item(root->right, data_ref, cmpf);
	if (res != 0)
		return (res);
	return (0);
}
