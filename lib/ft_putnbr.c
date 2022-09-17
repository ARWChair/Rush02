/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnauschn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:47:16 by vnauschn          #+#    #+#             */
/*   Updated: 2022/09/15 15:48:07 by vnauschn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_iterative_power(int nb, int power)
{
	int	equal;

	equal = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		equal = equal * nb;
		power--;
	}
	return (equal);
}

void	ft_putnbr(int nb)
{
	if (nb == ft_iterative_power(2, 31))
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar(48 + nb % 10);
	}
}
