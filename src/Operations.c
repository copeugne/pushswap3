/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copeugne <copeugne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:53:54 by copeugne          #+#    #+#             */
/*   Updated: 2022/09/11 12:56:29 by copeugne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void	rotate(t_node *top)
{
	t_node	*last;
	t_node	*tmp;

	if (!top || !top->next)
		return ;
	last = last_element(top);
	tmp = top;
	top = top->next;
	tmp->next = NULL;
	last->next = tmp;
}

void	reverse_rotate(t_node *top)
{
	t_node	*prev;
	t_node	*elem;

	if (!top || !top->next)
		return ;
	elem = top;
	while (elem->next)
	{
		prev = elem;
		elem = elem->next;
	}
	elem->next = top;
	top = elem;
	prev->next = NULL;
}

t_node	*ft_swap(t_node *node)
{
	if (!node)
		exit(1);
	if (size(node) > 1)
		swap(&node->data, &node->next->data);
	return (node);
}