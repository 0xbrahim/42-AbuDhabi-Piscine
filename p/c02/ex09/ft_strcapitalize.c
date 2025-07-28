/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:07:56 by bahmed            #+#    #+#             */
/*   Updated: 2024/10/30 14:43:18 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*pointer;
	int		i;
	int		new;

	i = 0;
	new = 1;
	pointer = str;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && new)
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && !new)
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
				&& str[i] <= 'Z'))
			new = 0;
		else if (str[i] >= '0' && str[i] <= '9')
			new = 0;
		else
			new = 1;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char string1[] = "salut,
//		comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	printf("%s\n", string1);
// 	ft_strcapitalize(string1);
// 	printf("%s\n", string1);
// 	return (0);
// }