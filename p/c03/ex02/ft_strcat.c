/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:11:54 by bahmed            #+#    #+#             */
/*   Updated: 2024/11/02 14:11:58 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	o;
	int	j;

	o = 0;
	j = 0;
	while (dest[o] != '\0')
	{
		o++;
	}
	while (src[j] != '\0')
	{
		dest[o] = src[j];
		o++;
		j++;
	}
	dest[o] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char first_name[] = "Brahim";
// 	char last_name[] = " Ahmed";

// 	char *total = ft_strcat(first_name, last_name);
// 	printf("%s", total);
// 	return (0);
// }
