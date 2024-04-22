/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:22:42 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/04/08 15:39:11 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptrsrc;

	ptrsrc = (char *)s;
	while (*ptrsrc != c)
	{
		if (*ptrsrc == '\0')
		{
			return (NULL);
		}
		ptrsrc++;
	}
	return (ptrsrc);
}
