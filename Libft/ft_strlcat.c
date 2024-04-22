/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:06:04 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/04/09 17:17:12 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			j;
	unsigned char	*ptrdst;
	unsigned char	*ptrsrc;
	unsigned int	res;

	res = ft_strlen(dst) + ft_strlen(src);
	i = ft_strlen(dst);
	j = 0;
	ptrdst = (unsigned char *)dst;
	ptrsrc = (unsigned char *)src;
	while (ptrsrc[j] != '\0' && i < (size - 1))
	{
		ptrdst[i] = ptrsrc[j];
		j++;
		i++;
	}
	ptrdst[i] = '\0';
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	char teste1[] = "Bom";
	char teste2[] = " dia, rapaziada";

	printf("%li\n", ft_strlcat(teste1, teste2, 12));
	printf("%s\n", teste1);
}*/