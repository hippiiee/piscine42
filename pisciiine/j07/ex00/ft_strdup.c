/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hquere <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 15:14:46 by hquere            #+#    #+#             */
/*   Updated: 2018/07/20 15:58:02 by hquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_len(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	int i;
	int l;
	char *new;

	i = 0;
	l = ft_len(src);
	new = (char *)malloc(sizeof(char) * l);
	if (new == NULL)
		return (0);
	if (new == 0)
		return new;
	while (i < l - 1)
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
