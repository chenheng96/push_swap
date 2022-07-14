/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:19:44 by cchong            #+#    #+#             */
/*   Updated: 2022/07/14 16:09:14 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	swap_value(int *i, int *j)
{
	int	temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

void	quicksort(int *arr, int first, int last)
{
	int	i;
	int	j;
	int	pivot;

	if (first < last)
	{
		pivot = first;
		i = first;
		j = last;
		while (i < j)
		{
			while (arr[i] <= arr[pivot] && i < last)
				i++;
			while (arr[j] > arr[pivot])
				j--;
			if (i < j)
				swap_value(&arr[i], &arr[j]);
			swap_value(&arr[pivot], &arr[j]);
			quicksort(arr, first, j - 1);
			quicksort(arr, j + 1, last);
		}
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

	quicksort(arr, 0, n - 1);
	printarr(arr, n);
}

