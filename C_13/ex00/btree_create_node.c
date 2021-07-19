#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node (void *item)
{
	t_btree	*node;

	node = malloc(sizeof(*node));
	node->left = 0;
	node->right = 0;
	node->item = item;
	return (node);
}
