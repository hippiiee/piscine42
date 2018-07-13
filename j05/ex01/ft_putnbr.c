/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hquere <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:35:42 by hquere            #+#    #+#             */
/*   Updated: 2018/07/11 11:28:24 by hquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int number;

	number = nb;
	if (number < 0)
	{
		number = number * (-1);
		ft_putchar('-');
	}
	if (number > 0)
	{
		ft_putnbr(nb = number / 10);
		ft_putchar(number % 10 + 48);
	}
}
