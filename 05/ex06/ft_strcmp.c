/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:40:17 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/01 15:40:19 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int a;
	int b;
	int res;

	a = 0;
	b = 0;
	res = 0;
	while (s1[a] != '\0')
	{
		if (s1[a] != s2[b])
		{
			res = -1;
			a++;
		}
		else
		{
			res = 0;
			a++;
			b++;
		}
	}
	if (res < 0)
		return (res);
	else
		return (res);
}