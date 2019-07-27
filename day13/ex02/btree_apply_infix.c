/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 19:56:18 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/15 19:56:20 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root->left != NULL)
		btree_apply_prefix(root->left, applyf);
	applyf(root->item);
	if (root->right != NULL)
		btree_apply_prefix(root->right, applyf);
}
