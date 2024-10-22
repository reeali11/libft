/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 09:18:12 by reeali            #+#    #+#             */
/*   Updated: 2023/07/28 19:33:43 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (str1[i] || str2[i]))
	{
		if ((unsigned char)str1[i] > (unsigned char)str2[i])
		{
			return (1);
		}
		else if ((unsigned char)str1[i] < (unsigned char)str2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_strncmp("reem", "reem", 4));
//     printf("%d\n", ft_strncmp("reem ali", "ree", 5));
//     printf("%d\n", ft_strncmp("reem", "reeuj", 4));
// }
/*int main()
{
	char s1[] = "reem";
	char s2[] = "ali";
	printf("%d", ft_strncmp(s1, s2, 2));
}*/