/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:55:16 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/14 18:48:26 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	if (*str == 0)
		return (1);
	while (*str != '\0')
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "Howdy";
	char	str2[] = "H0wdy";
	char	str3[] = "";

	printf("Str1: %d\n", ft_str_is_alpha(str1));
	printf("Str2: %d\n", ft_str_is_alpha(str2));
	printf("Str3: %d\n", ft_str_is_alpha(str3));
}*/
