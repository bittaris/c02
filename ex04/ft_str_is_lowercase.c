/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:54:08 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/15 09:42:54 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		++str;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "onomatopeia";
	char	str2[] = "Onomatopeia";
	char	str3[] = "";

	printf("Str1: %d\n", ft_str_is_lowercase(str1));
	printf("Str2: %d\n", ft_str_is_lowercase(str2));
	printf("Str3: %d\n", ft_str_is_lowercase(str3));

	return 0;
}*/
