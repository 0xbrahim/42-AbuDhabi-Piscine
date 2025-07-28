/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:55:28 by bahmed            #+#    #+#             */
/*   Updated: 2024/11/09 14:10:20 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb > 12)
		return (0);
	if (i < 0)
		return (0);
	if (i == 0)
		return (1);
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(5));
// 	return (0);
// }
