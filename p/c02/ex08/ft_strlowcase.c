/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:51:29 by bahmed            #+#    #+#             */
/*   Updated: 2024/10/31 12:36:49 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (ptr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	string1[] = "ABCDEFGHI";

// 	printf("\n%s\n", string1);
// 	ft_strlowcase(string1);
// 	printf("%s\n", string1);
// 	return (0);
// }
