/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:08:25 by bahmed            #+#    #+#             */
/*   Updated: 2024/11/10 14:40:40 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_str(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char *av[])
{
	int	i;

	i = ac - 1;
	while (i)
	{
		ft_put_str(av[i]);
		write(1, "\n", 1);
		i--;
	}
}
