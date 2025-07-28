/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:22:39 by bahmed            #+#    #+#             */
/*   Updated: 2024/11/11 13:23:17 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	j;

	j = 0;
	if (min >= max)
		return (0);
	tab = (int *)malloc((max - min) * sizeof(int));
	if (tab == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		tab[j] = min;
		min++;
		j++;
	}
	return (tab);
}
