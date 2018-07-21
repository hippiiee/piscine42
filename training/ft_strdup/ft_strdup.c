/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hquere <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 15:22:30 by hquere            #+#    #+#             */
/*   Updated: 2018/07/20 15:43:24 by hquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str_len(*str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i + 1);
}

char	ft_strdup(*str)
{
	int i;
	int l;
	char *new;

	i = 0;
	l = str_len(str);
	new = (char *)malloc(sizeof(char) * l);
	if (new == NULL)
		return (0);
	if (new == 0)
		return (new);
	while (i < l - 1)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return(new);
}
