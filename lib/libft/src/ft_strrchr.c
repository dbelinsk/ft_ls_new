/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelinsk <dbelinsk@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:50:40 by dbelinsk          #+#    #+#             */
/*   Updated: 2024/12/11 13:21:47 by dbelinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	size_t			i;
	size_t			n;
	int				diff;

	diff = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			n = i;
			diff = 1;
		}
		i++;
	}
	if (diff)
		return ((char*)ft_memchr((const void*)(s + n), c, diff));
	else if ((char)c == '\0')
		return ((char*)(s + i));
	else
		return (0);
}
