
int		ft_strlen(char *str);
void	ft_rev_int_tab(char *tab)
{
	int	count;
	int	count_rev;
	int	tmp;
	int	size;

	size = ft_strlen(tab);
	count_rev = 0;
	count = size - 1;
	while (*tab)
	{
		tmp = tab[count_rev];
		tab[count_rev] = tab[count];
		tab[count] = tmp;
		count--;
		count_rev++;
		if (count_rev == size / 2)
			return ;
	}
}