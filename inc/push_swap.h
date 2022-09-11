/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copeugne <copeugne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:46:25 by copeugne          #+#    #+#             */
/*   Updated: 2022/09/11 12:56:19 by copeugne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>	
#include <unistd.h>

typedef struct s_node t_node;

struct	s_node
{
    int		data;               // données entières
    t_node	*next;      // pointeur vers le nœud suivant
};

// Operations
t_node	*ft_swap(t_node *node);
void	rotate(t_node *top);
void	reverse_rotate(t_node *top);

// Helpers
int	ft_strlen(const char *s);
void	ft_error(int fd, char *str);

void	swap(int *a, int *b);
int		size(t_node *Node);
t_node	*last_element(t_node *top);

// Parsing
int	parser(int size, char **str);
int	ft_checker(int c);

#endif