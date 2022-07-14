/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertionsort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:40:33 by cchong            #+#    #+#             */
/*   Updated: 2022/07/14 16:28:37 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	insertionsort(int *arr, int n)
{
	int	i;
	int	j;
	int	key;

	i = 0;
	while (++i < n)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

void	printarr(int *arr, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		printf("%d ", arr[i]);
	printf("\n");
}

int	main(void)
{
	int	arr[] = {12, 11, 13, 5, 6, 100, -1, -4, 200, 50};
	int	n = sizeof(arr) / sizeof(arr[0]);

	insertionsort(arr, n);
	printarr(arr, n);
}
