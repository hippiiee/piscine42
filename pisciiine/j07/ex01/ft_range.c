/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hquere <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 13:51:11 by hquere            #+#    #+#             */
/*   Updated: 2018/07/21 09:29:51 by hquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int len;
	int *tab;
	int i;

	i = 1;
	tab = NULL;
	len = max - (min);
	if (min >= max)
		return (tab);
	tab	= malloc(sizeof(int) * len);
	if (tab == NULL)
		return(NULL);
	while (min < max)
	{	
		printf("%d\n", min);	
		tab[i] = min;
		min++;
		i++;
	}
	return(tab);
}

int		main(void)
{
	int *a;
	int i = -5;

	a = ft_range(-5, 5);
	while (a[i] < 5)
	{
		printf("%d", a[i]);	
		i++;
	}
	return (0);
}
