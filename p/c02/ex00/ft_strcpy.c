/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:47:13 by bahmed            #+#    #+#             */
/*   Updated: 2024/10/30 14:42:30 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	char	string1[100];
// 	char	string2[] = "Ahmed";

// 	ft_strcpy(string1, string2);
// 	printf("Copied string: %s\n", string1);
// 	return (0);
// }
