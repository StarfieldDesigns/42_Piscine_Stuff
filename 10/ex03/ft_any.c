/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 18:32:08 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/08 18:32:10 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char *))
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (tab[a][b] != '\0')
	{
		if (f(tab[a]))
			return (1);
		b++;
	}
	return (0);
}
