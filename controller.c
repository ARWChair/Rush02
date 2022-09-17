/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 23:41:58 by yatabay           #+#    #+#             */
/*   Updated: 2022/09/17 23:43:56 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*controller(char *nb);
char	*ft_strstr(char *str, char *to_find);
char	*ft_mkfin(char *found);
int	ft_strlen(char *str);

char	*controller(char *nb)
{
	char	dict[4000];
	char	*found;
	int		vread;
	int		vopen;

	//read file and put it in the string buf
	vopen = open("numbers.dict", O_RDONLY);
	vread = read(vopen, dict, 4000);
	dict[vread] = '\0';
	// find the inputnumber in buf
	found = ft_strstr(dict, nb);
	// gehe zu erstem Buchstaben der ausgeschriebenen Zahl
	return (ft_mkfin(found));
}

char	*ft_mkfin(char *found)
{
	char	*final;
	int		count;
	int		i;

	final = malloc(ft_strlen(found) + 1);
	count = 0;
	i = 0;
	while (found[count] >= '0' && found[count] <= '9')
		count++;
	// überspringe ": "
	count = count + 2;
	// Wort in neuen string kopieren
	while (found[count + i] >= 'a' && found[count + i] <= 'z')
	{
		final[i] = found[count + i];
		i++;
	}
	final[i] = '\0';
	return (final);
}
