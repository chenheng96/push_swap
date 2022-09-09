/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:29:43 by cchong            #+#    #+#             */
/*   Updated: 2022/09/09 16:02:59 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stacks_del(t_stacks *stacks)
{
	ft_lstclear(stacks->a);
	ft_lstclear(stacks->b);
	free(stacks);
}

t_stacks	*ft_stacks_init(void *afirstnode, void *bfirstnode)
{
	t_stacks	*stacks;
	t_list 		*a;
	t_list 		*b;

	stacks = ft_malloc(sizeof(t_stacks));
	a = ft_lstnew(afirstnode);
	b = ft_lstnew(bfirstnode);
	stacks->a = a;
	stacks->b = b;
	return (stacks);
}

int	*linkedlist_to_arr(t_list **lst)
{
	int		*arr;
	size_t	size;

	size = ft_lstsize(*lst);
	arr = ft_malloc(int);
	i = -1;
	while (++i < size)
		arr[i] = ft_malloc(int);
	i = -1;
	while (++i < size)
	{
		arr[i] = *lst->content;
		*lst = *lst->next;
	}
	return (arr);
}

t_list	**arr_to_linkedlist(int *arr)
{
	size_t	num_of_elem;
	size_t	index;
	t_list	**lst;
	t_list	*node;

	num_of_elem = sizeof(arr) / sizeof(arr[0]);
	if (num_of_elem > 1)
	{
		index = -1;
		while (++index < num_of_elem)
		{
			node = ft_lstnew(arr[index]);
			ft_lstadd_back(lst, node);
		}
	}
	return (lst);
}

void	handle_error(long *arr)
{
	size_t	i;
	size_t	j;
	size_t	num_of_elem;

	num_of_elem = sizeof(arr) / sizeof(arr[0]);
	i = -1;
	while (++i < num_of_elem)
	{
		if (arr[i] > INT_MAX || arr[i] < INT_MIN)
			ft_perror("Value smaller or larger than integer\n");
		j = i;
		while (++j < num_of_elem)
		{
			if (arr[i] == arr[j])
				ft_perror("Duplicate values\n");
		}
	}
}

int	main(int ac, char **av)
{
	char	**arr;
	long	*list;
	size_t	i;
	size_t	j;
	t_list	**stack_a;

	if (ac < 2)
		return (-1);
	if (ac == 2)
	{
		arr = ft_split(av[1], ' ');
		j = sizeof(arr) / sizeof(arr[0]);
		i = -1;
		while (++i < j)
			list[i] = ft_malloc(long);
		i = -1;
		while (arr[++i] != '\0')
		{
			list[i] = ft_atoi(arr[i]);
			free(arr[i]);
		}
		free(arr);
	}
	else if (ac > 2)
	{
		list = ft_malloc(long);
		i = -1;
		while (++i < ac - 1)
			list[i] = ft_malloc(long);
		i = -1;
		while (++i < ac - 1)
			list[i] = ft_atoi(av[i + 1]);
	}
	handle_error(list);
	stack_a = arr_to_linkedlist(list);
}
