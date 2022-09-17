/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnauschn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:19:10 by vnauschn          #+#    #+#             */
/*   Updated: 2022/09/17 20:13:27 by vnauschn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int    i;

	ft_strlowcase(str);
	i = 1;
	while (str[i])
	{
		if (!(str[i - 1] > 96 && str[i - 1] < 123))
		{
			if (!(str[i - 1] > 64 && str[i - 1] < 91))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
