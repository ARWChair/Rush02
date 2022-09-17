/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnauschn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:14:55 by vnauschn          #+#    #+#             */
/*   Updated: 2022/09/13 16:07:12 by vnauschn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*new;

	new = dest;
	while (*new)
		new++;
	while (*src && nb-- > 0)
	{
		*new = *src;
		new++;
		src++;
	}
	*new = '\0';
	return (dest);
}
