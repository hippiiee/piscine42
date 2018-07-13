/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hquere <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 12:05:44 by hquere            #+#    #+#             */
/*   Updated: 2018/07/11 17:19:31 by hquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		if (n < i)
		{
			dest[i] = '\0';
			i++;
		}
	}
	if (i == n)
		return (dest);
	if (src[i] == '\0')
		dest[i] = '\0';
	return (dest);
}
