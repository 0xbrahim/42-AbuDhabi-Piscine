/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:35:56 by bahmed            #+#    #+#             */
/*   Updated: 2024/11/03 13:54:55 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 97;
	while (alphabet <= 122)
	{
		write(1, &alphabet, 1);
		alphabet = alphabet + 1;
	}
}

// int main(void)
// {
//     ft_print_alphabet();
//     return (0);
// }
