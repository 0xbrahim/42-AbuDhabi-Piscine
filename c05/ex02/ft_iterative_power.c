/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:36:46 by bahmed            #+#    #+#             */
/*   Updated: 2024/11/09 14:10:23 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	if (power == 0 && nb == 0)
		return (1);
	while (power >= 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	test;

// 	test = ft_iterative_power(3, 3);
// 	printf("%d", test);
// 	return (0);
// }
