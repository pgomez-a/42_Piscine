/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:39:24 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/11 10:56:26 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		count;

	count = 1;
	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	while (count < (nb / 2))
	{
		if ((count * count) == nb)
			return (count);
		count++;
	}
	return (0);
}