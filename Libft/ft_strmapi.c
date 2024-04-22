/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:03:33 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/04/11 14:36:27 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptrstr;
	unsigned int	i;

	ptrstr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	i = 0;
	if (ptrstr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ptrstr[i] = f(i, s[i]);
		i++;
	}
	ptrstr[i] = '\0';
	return (ptrstr);
}
/*
#include <stdio.h>

char	my_func(unsigned int i, char str)
{
	printf("test: index = %d and %c\n", i, str);
	return (str - 32);
}
int	main(void)
{
	char	str[10] = "hello.";
	char	*result;

	printf("The test is %s\n", str);
	result = ft_strmapi(str, my_func);
	printf("The result is %s\n", result);
	return (0);
}
*/