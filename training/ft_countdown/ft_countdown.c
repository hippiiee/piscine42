/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hquere <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 10:07:11 by hquere            #+#    #+#             */
/*   Updated: 2018/07/20 10:13:02 by hquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_countdown()
{
	int i;

	i = 10;
	while (i-- > 0)
		ft_putchar(i + 48);
	ft_putchar('\n');
	return (0);
}

int		main()

{
	ft_countdown();
	return (0);
}
