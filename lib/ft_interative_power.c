
int	ft_iterative_power(int nb, int power)
{
	int	equal;

	equal = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		equal = equal * nb;
		power--;
	}
	return (equal);
}