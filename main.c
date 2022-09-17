/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaltenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:11:52 by ekaltenb          #+#    #+#             */
/*   Updated: 2022/09/17 21:58:17 by ekaltenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/* int		getnum(char *str, int index);
void	ft_rev_int_tab(char *tab);
char	*ft_get_string(char *str); */

int		getnum(char *str, int index);
int		ft_intlen(int *nbr);
void	ft_putchar(char c);
int		ft_iterative_power(int nb, int power);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_str_is_numeric(char *str);
char	*ft_strcapitalize(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
char	*ft_get_string(char *str);
void	ft_rev_int_tab(char *tab);

int	main(void)
{
	char	*arrpo;
	char	*temp;
	int		i;

	char	arr[] = " 000003242341 d jdfs";
	if (ft_get_string(arr) != NULL)
		temp = ft_get_string(arr);
	else
		return (0);
	arrpo = arr;
	ft_rev_int_tab(temp);
	i = getnum(temp, 2);
	printf("%d\n\n", i);
	printf("%s\n", temp);
	return (0);
}
