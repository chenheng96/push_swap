/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:26:51 by cchong            #+#    #+#             */
/*   Updated: 2022/09/09 13:09:49 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *arr)
{
	int	temp;

	if (arr[0] != '\0' && arr[1] != '\0')
	{
		temp = arr[0];
		arr[0] = arr[1];
		arr[1] = temp;
	}
}

void	sb(int *arr)
{
	int	temp;

	if (arr[0] != '\0' && arr[1] != '\0')
	{
		temp = arr[0];
		arr[0] = arr[1];
		arr[1] = temp;
	}
}

void	ss(int *arr, int *arr2)
{
	sa(arr);
	sb(arr2);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list *node;

	if (stack_a->content == NULL)
		return ;
	while (stack_a->next != NULL)
		stack_a = stack_a->next;
	node = ft_lstnew(stack_a->content);
	ft_lstadd_back(stack_b, node);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list *node;

	if (stack_b->content == NULL)
		return ;
	while (stack_b->next != NULL)
		stack_b = stack_b->next;
	node = ft_lstnew(stack_b->content);
	ft_lstadd_back(stack_a, node);
}

// 12345 -> 23451
void	ra(t_list **stack_a)
{
	t_list	*first;
	t_list	*last;

	first = *stack_a;
	last = ft_lstlast(*stack_a);
	last->next = first;
	stack_a = first->next;
}

void	rb(t_list **stack_b)
{
	t_list	*first;
	t_list	*last;

	first = *stack_b;
	last = ft_lstlast(*stack_b);
	last->next = first;
	stack_b = first->next;
}

void	rotate(t_list **stack_a)
{
	t_list	*first;
	t_list	*last;

	first = *stack_a;
	last = ft_lstlast(*stack_a);
	last->next = first;
	stack_a = first->next;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}

// 1234 -> 4123
void	rra(t_list **stack_a)
{
	t_list	*first;
	t_list	*last;
	int		size;

	size = ft_lstsize(*stack_a);
	first = *stack_a;
	last = ft_lstlast(*stack_a);
	stack_a = last;
	while (--size > 0)
		*stack_a = *stack_a->next;
	*stack_a->next = NULL;
	last->next = first;
}

void	rrb(t_list **stack_b)
{
	t_list	*first;
	t_list	*last;
	int		size;

	size = ft_lstsize(*stack_b);
	first = *stack_b;
	last = ft_lstlast(*stack_b);
	stack_b = last;
	while (--size > 0)
		*stack_b = *stack_b->next;
	*stack_b->next = NULL;
	last->next = first;
}

void	reverserotate(t_list **stack_a)
{
	t_list	*first;
	t_list	*last;
	int		size;

	size = ft_lstsize(*stack_a);
	first = *stack_a;
	last = ft_lstlast(*stack_a);
	stack_a = last;
	while (--size > 0)
		*stack_a = *stack_a->next;
	*stack_a->next = NULL;
	last->next = first;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverserotate(stack_a);
	reverserotate(stack_b);
}
