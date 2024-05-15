/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:09:24 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/16 19:46:53 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "HeLLo WoRLd!";

	printf("Og string: %s\n", str);
	printf("Lowercase string: %s\n", ft_strlowcase(str));
	return (0);
}*/
