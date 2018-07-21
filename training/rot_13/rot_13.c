/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hquere <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 10:25:07 by hquere            #+#    #+#             */
/*   Updated: 2018/07/20 14:14:57 by hquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		rotone(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			ft_putchar(str[i] + 13);
		if ((str[i] > 'm' && str[i] <= 'z') || (str[i] > 'M' && str[i] <= 'Z'))
			ft_putchar(str[i] - 13);
		else
			ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
	return(0);
}

int		main(int a, char **b)
{
	if (a != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	rotone(b[1]);
	return(0);
}
