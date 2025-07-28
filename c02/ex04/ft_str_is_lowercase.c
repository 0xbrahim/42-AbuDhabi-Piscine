/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:33:36 by bahmed            #+#    #+#             */
/*   Updated: 2024/10/30 14:42:48 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	status;

	status = 1;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			str = str + 1;
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
// 	int a = ft_str_is_lowercase("abc");
// 	printf("%d", a);
// 	return (0);
// }