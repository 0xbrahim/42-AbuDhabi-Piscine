/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:05:57 by bahmed            #+#    #+#             */
/*   Updated: 2024/10/30 14:42:59 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*pointer;

	pointer = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str = str + 1;
	}
	str = pointer;
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char string1[] = "abcdefghi";
// 	printf("\n%s\n", string1);
// 	ft_strupcase(string1);
// 	printf("%s\n", string1);
// 	return (0);
// }