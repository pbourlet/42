










char	*ft_strcat(char *dest, const char *src)
{
		int		i;
		int		len;

		i = 0;
		len = 0;
		while (dest[len] != '\0')
				len++;
		while (src[i] != '\0')
		{
				dest[len + i] = src[i];
				i++;
		}
		dest[len + i] = '\0';
		return (dest);
}
