/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:20:21 by bahmed            #+#    #+#             */
/*   Updated: 2024/10/28 11:55:00 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	index;
	int	swapped;

	while (size > 0)
	{
		swapped = 0;
		index = 0;
		while (index < size - 1)
		{
			if (tab[index] > tab[index + 1])
			{
				temp = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = temp;
				swapped = 1;
			}
			index++;
		}
		if (swapped == 0)
		{
			break ;
		}
		size--;
	}
}
