/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:30:03 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/10 13:01:44 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int		result;

	result = nb;
	if (power == 0)
		return (1);
	else if (power > 0)
	{
		if (power == 1)
			result = nb;
		else
			result = nb * ft_recursive_power(nb, power - 1);
		return (result);
	}
	else
		return (0);
}
