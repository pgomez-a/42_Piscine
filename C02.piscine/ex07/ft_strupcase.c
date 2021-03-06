/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:40:49 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/02 19:04:16 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] >= 97) && (str[count] <= 122))
			str[count] -= 32;
		count++;
	}
	return (str);
}
