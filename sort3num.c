/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:30:52 by cchong            #+#    #+#             */
/*   Updated: 2022/09/02 14:13:10 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// 123-sorted (top<mid, mid<bot, top<bot)
// 132-rra,sa (top<mid, mid>bot, top<bot)
// 231-rra (top<mid, mid>bot, top>bot)
// 213-sa (top>mid, mid<bot, top<bot)
// 312-ra (top>mid, mid<bot, top>bot)
// 321-ra,sa (top>mid, mid>bot, top>bot)

int	*sort3num(int *arr)
{
	if (arr[0] < arr[1] && arr[1] < arr[2] && arr[0] < arr[2])
		return (arr);
	if (arr[0] < arr[1] && arr[1] > arr[2] && arr[0] < arr[2])
	{
		rra(arr);
		sa(arr);
	}
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[0] > arr[2])
		rra(arr);
	else if (arr[0] > arr[1] && arr[1] > arr[2] && arr[0] < arr[2])
		sa(arr);
	else if (arr[0] > arr[1] && arr[1] < arr[2] && arr[0] > arr[2])
		ra(arr);
	else if (arr[0] > arr[1] && arr[1] > arr[2] && arr[0] > arr[2])
	{
		ra(arr);
		sa(arr);
	}
	return (arr);
}
