/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:35:14 by bahmed            #+#    #+#             */
/*   Updated: 2024/10/31 08:29:14 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	status;

	status = 1;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			str++;
		}
		else
		{
			return (status = 0);
		}
	}
	return (status);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int x = ft_str_is_numeric("000");
// 	printf("%d", x);

// 	return (0);
// }
