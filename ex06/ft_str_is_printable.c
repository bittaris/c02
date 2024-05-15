/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:05:12 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/15 11:29:01 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "Well look at this!";
	char	str2[] = "Someones\tSpecial\n";
	char	str3[] = "Can't print this: \x01";
	char	str4[] = "";

	printf("Str1: %d\n", ft_str_is_printable(str1));
	printf("Str2: %d\n", ft_str_is_printable(str2));
	printf("Str3: %d\n", ft_str_is_printable(str3));
	printf("Str4: %d\n", ft_str_is_printable(str4));

	return 0;
}*/
