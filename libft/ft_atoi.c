










int		ft_atoi(char *str)
{
		int i;
		int neg;
		int num;

		i = 0;
		neg = 0;
		num = 0;
		while (str[i] <= 32)
				i++;
		if (str[i] == '-')
				neg = 1;
		if ((str[i] == '-') || (str[i] == '+'))
				i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
				num *= 10;
				num += (str[i] - 48);
				i++;
		}
		if (neg == 1)
				return (-num);
		else
				return (num);
}
