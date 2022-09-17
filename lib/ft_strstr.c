/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnauschn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:14:55 by vnauschn          #+#    #+#             */
/*   Updated: 2022/09/13 16:06:51 by vnauschn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*text;
	char	*part;

	if (*to_find == '\0')
		return (str);
	text = str;
	part = to_find;
	while (1)
	{
		if (*part == '\0')
			return (text - (part - to_find));
		if (*text == *part)
			part++;
		else
			part = to_find;
		if (*text == '\0')
			break ;
		text++;
	}
	return (0);
}
