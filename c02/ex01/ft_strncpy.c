/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:50:25 by bahmed            #+#    #+#             */
/*   Updated: 2024/10/30 14:42:34 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	char dest[15] = "world";
// 	char src[15] = "hey";

// 	printf("Before: %s\n", dest);
// 	ft_strncpy(dest, src, 2);
// 	printf("Copied string: %s\n", dest);

// 	return (0);
// }
