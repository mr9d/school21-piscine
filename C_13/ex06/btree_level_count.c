#include "ft_btree.h"

int	btree_level_count (t_btree *root)
{
	int	lc;
	int	rc;

	if (root == 0)
		return (0);
	lc = btree_level_count(root->left);
	rc = btree_level_count(root->right);
	if (lc > rc)
		return (lc + 1);
	else
		return (rc + 1);
}
