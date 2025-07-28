/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:44:37 by bahmed            #+#    #+#             */
/*   Updated: 2024/10/30 14:42:52 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	status;

	status = 1;
	status = 1;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
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
// 	int x = ft_str_is_uppercase("ABC");
// 	printf("%d", x);
// 	return (0);
// }