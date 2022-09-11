/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copeugne <copeugne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:39:13 by copeugne          #+#    #+#             */
/*   Updated: 2022/09/11 09:52:51 by copeugne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

t_node	*last_element(t_node *top)
{
	t_node	*elem;

	if (!top)
		return (NULL);
	elem = top;
	while (elem->next)
		elem = elem->next;
	return (elem);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_checker(int c)
{
	if (((c >= 48 && c <= 57) || c == 43 || c == 45))
		return (1);
	else
		return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr_fd(int fd, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

void	ft_error(int fd, char *str)
{
	if (!(ft_strcmp(str, "") == 0))
		ft_putstr_fd(fd, str);
	exit(EXIT_FAILURE);
}

