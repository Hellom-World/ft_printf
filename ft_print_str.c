size_t	ft_print_str(char *str)
{
	int	i;

	if (!str)
	{
		ft_print_str("(null)");
		return (6);
	}

	i = 0;

	while (str[i])
	{
		write(1, &str[i], sizeof(char));
		i++;
	}

	return (i);
}
