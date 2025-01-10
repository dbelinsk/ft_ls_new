/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelinsk <dbelinsk42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:39:22 by dbelinsk          #+#    #+#             */
/*   Updated: 2025/01/06 11:35:16 by dbelinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <libft.h>

void		format_time(char *ftime, time_t mtime)
{
	time_t		time_now;
	char		*str;
	char		**arr;
	
	ft_bzero(ftime, 13);
	time_now = time(NULL);
	str = ctime(&mtime);
	ft_memcpy(ftime, str + 4, 7);
	if (time_now - mtime > 15552000)
		ft_memcpy(ftime + 7, str + 19, 5);
	else
		ft_memcpy(ftime + 7, str + 11, 5);
}