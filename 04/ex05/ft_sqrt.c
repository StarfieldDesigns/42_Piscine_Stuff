/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 14:18:34 by aholtzma          #+#    #+#             */
/*   Updated: 2019/03/30 14:18:38 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int res;

	res = 0;
	while (res <= (nb / 2))
	{
		if (res * res == nb)
		{
			return (res);
		}
		res++;
	}
	return (0);
}