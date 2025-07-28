/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:46:40 by bahmed            #+#    #+#             */
/*   Updated: 2024/11/03 13:55:14 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numbers;

	numbers = 48;
	while (numbers <= 57)
	{
		write(1, &numbers, 1);
		numbers = numbers + 1;
	}
}

// int main(void)
// {
//     ft_print_numbers();
//     return (0);
// }