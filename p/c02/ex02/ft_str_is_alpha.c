/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:38:08 by bahmed            #+#    #+#             */
/*   Updated: 2024/10/30 14:42:40 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	status;

	status = 1;
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		{
			return (status = 0);
		}
		else
		{
			str = str + 1;
		}
	}
	return (status);
}

// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	int x = ft_str_is_alpha("abc");
// 	printf("%d", x);

// 	return (0);
// }
