/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copeugne <copeugne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:48:21 by copeugne          #+#    #+#             */
/*   Updated: 2022/09/11 09:48:40 by copeugne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	parser(int size, char **str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < size)
	{
		while (j < ft_strlen(str[i]))
		{
			if (!(ft_checker(str[i][j])))
				ft_error(2, "Arguments given contain forbidden characters.\n");
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}