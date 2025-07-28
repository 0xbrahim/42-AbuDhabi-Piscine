/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:55:37 by bahmed            #+#    #+#             */
/*   Updated: 2024/10/30 14:42:55 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	char	start;
	char	end;
	int		status;

	start = 32;
	end = 127;
	status = 1;
	while (*str != '\0')
	{
		if (*str >= start && *str <= end)
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
// 	int x = ft_str_is_printable("dhskjhfdkj@!#@$674563");
//     int y = ft_str_is_printable("\n");
//     int z = ft_str_is_printable("");
// 	printf("%d\n", x);
//     printf("%d\n", y);
//     printf("%d\n", z);

// 	return (0);
// }