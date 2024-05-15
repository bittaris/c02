/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:07:37 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/14 18:41:28 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "3003152";
	char	str2[] = "3oo3152";
	char	str3[] = "";

	printf("Str1: %d\n", ft_str_is_numeric(str1));
	printf("Str2: %d\n", ft_str_is_numeric(str2));
	printf("Str3: %d\n", ft_str_is_numeric(str3));
}*/
