/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:22:54 by bahmed            #+#    #+#             */
/*   Updated: 2024/11/11 13:23:24 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ans;
	int		i;
	int		j;
	int		len;

	i = 0;
	len = 0;
	ans = malloc(sizeof(strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			ans[len++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			ans[len++] = sep[j++];
		}
		i++;
	}
	ans[len] = '\0';
	return (ans);
}
