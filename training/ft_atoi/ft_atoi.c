/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hquere <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 13:14:29 by hquere            #+#    #+#             */
/*   Updated: 2018/07/20 13:55:57 by hquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int b;

	b = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\v'
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		b = b * 10 + str[i] - 48;
		i++;
	}
	return (b * sign);
}

int		main()
{
	char b[] = "qissqi46821";
	printf("%d", ft_atoi(b));
	return(0);
}
