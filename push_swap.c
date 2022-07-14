/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:29:43 by cchong            #+#    #+#             */
/*   Updated: 2022/07/14 13:46:50 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char	**arr;
	int		*list;
	size_t	i;
	size_t	j;

	if (ac < 2)
		return (-1);
	if (ac == 2)
	{
		arr = ft_split(av[1], ' ');
		i = -1;
		while (arr[++i] != '\0')
		{
			list[i] = ft_atoi(arr[i]);
			free(arr[i]);
		}
		free(arr);
	}
}
