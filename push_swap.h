/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:33:09 by cchong            #+#    #+#             */
/*   Updated: 2022/07/14 16:10:16 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_stacks
{
	struct s_list *a;
	struct s_list *b;
}	t_stacks;

void	quicksort(int *arr, int first, int last);
void	insertionsort(int *arr, int n);

#endif