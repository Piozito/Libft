/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:27:04 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/04/09 18:25:22 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*ptr;
	unsigned int	i;
	unsigned int	j;
	unsigned int	max;

	i = 0;
	j = 0;
	max = strlen(s1);
	while (set[i] != '\0')
	{
		if (s1[0] == set[i])
			j++;
		if (s1[ft_strlen(s1) - 1] == set[i])
			max = ft_strlen(s1) - 1;
		i++;
	}
	ptr = (char *)malloc((max - j) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (j < max)
		ptr[i++] = s1[j++];
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char pog[] = "#ABC-_-3DEF89&*";
	char set[] = "-*#&";

	char *ptr = ft_strtrim(pog, set);
	printf("%s\n", ptr);
}*/