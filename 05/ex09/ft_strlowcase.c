/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 18:38:58 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/01 18:39:01 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	tmp[100];
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9'))
		{
			tmp[a] = (str[a]);
			a++;
		}
		if (str[a] >= 'A' && *str <= 'Z')
		{
			tmp[a] = (str[a] + 32);
			a++;
		}
		else
		{
			tmp[a] = str[a];
			a++;
		}
	}
	str = tmp;
	tmp[a] = '\0';
	return (str);
}
