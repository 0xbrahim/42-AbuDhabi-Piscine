/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:09:28 by bahmed            #+#    #+#             */
/*   Updated: 2024/10/30 14:43:21 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size == 0)
	{
		return (len);
	}
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char		src[] = "My name is Brahim";
// 	char		dest[18];
// 	unsigned	x;

// 	x = ft_strlcpy(dest, src, 18);
// 	printf("Copied string: %s\n", dest);
// 	printf("lenght of source string: %u", x);
// 	if (x >= sizeof(dest))
// 		printf("Warning: Destnation buffer was too small\n");

// 	return (0);
// }
