#include "ft_btree.h"

int	g_to_level;

int	apply_to_level (t_btree *root, int current_level, int is_first,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	int	found;

	if (root == 0 || current_level > g_to_level)
		return (0);
	found = 0;
	if (current_level == g_to_level)
	{
		applyf(root->item, current_level, is_first);
		return (1);
	}
	found = apply_to_level(root->left, current_level + 1,
			is_first, applyf);
	if (found == 1)
		is_first = (0);
	found = apply_to_level(root->right, current_level + 1,
			is_first, applyf) || found;
	return (found);
}

void	btree_apply_by_level (t_btree *root,
			void (*applyf)(void *item, int current_level, int is_first_elem))
{
	int	found;
	int	level;

	if (root == 0)
		return ;
	found = 1;
	level = 1;
	while (found == 1)
	{
		g_to_level = level;
		found = apply_to_level(root, 1, 1, applyf);
		level++;
	}
}
