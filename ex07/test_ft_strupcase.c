/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:32:20 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/15 12:17:51 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*ptr; 

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr += 32;
		}
		ptr++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "Oh lOOk, it worKS!";

	printf("Og string: %s\n", str);
	printf("Altered string: %s\n", ft_strupcase(str));
	return 0;
}
