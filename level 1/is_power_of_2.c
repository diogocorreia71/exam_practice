/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:05:52 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/21 12:11:13 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	while (n > 0)
	{
		if (n == 2)
			return (1);
		if (n % 2 != 0)
			return (0);
		n = n / 2;
	}
	return (0);
}