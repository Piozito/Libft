/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:48:51 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/04/08 15:07:03 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			i;
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	i = 0;
	ptrdest = (unsigned char *)dst;
	ptrsrc = (unsigned char *)src;
	while ((size - 1) > 0)
	{
		ptrdest[i] = ptrsrc[i];
		size--;
		i++;
	}
	ptrdest[i] = '\0';
	i = 0;
	while (ptrsrc[i] != '\0')
		i++;
	return (i);
}
