/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 09:45:03 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/15 10:27:03 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "OMG";
	char	str2[] = "Omg";
	char	str3[] = "";

	printf("Str1: %d\n", ft_str_is_uppercase(str1));
	printf("Str2: %d\n", ft_str_is_uppercase(str2));
	printf("Str3: %d\n", ft_str_is_uppercase(str3));

	return 0;
}*/
