
int		ft_iterative_factorial(int nb)
{
	int resultat;

	if (nb > 12 || nb < 0)
		return (0);
	resultat = 1;
	while (nb > 0)
	{
		resultat = resultat * nb;
		nb--;
	}
	return (resultat);
}
