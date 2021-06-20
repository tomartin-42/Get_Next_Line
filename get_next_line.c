int	get_next_line (int	fd, char **line)
{
	char		*read_f[BUFF_SIZE + 1]
	static char	*buff_r[FD_SETSIZE];
	ssize_t		len;

	if (BUFF_SIZE < 1 || fd < 0 || fd > FD_SETSIZE || !line)
		return (-1);
	len = read (fd, read_f, BUFF_SIZE);
	if (len < 0)
		return (-1);
	while (len > 0)
	{
		read_f[len] = '\0';
		buff_r[fd] = ft_cpy_to_buff_r (&read_f, &buff_r[fd], len);
		if (ft_strchr (buff_r[fd], '\n')
				break ;
		len = read (fd, read_f, BUFF_SIZE);
	}

}

static *char	ft_cpy_to_buff_r (*read_f, *buff_r[fd], len)
{
	char *aux;

	if (!read_f[fd])
		read_f[fd] = ft_strdup (read_f);
	else
	{
		aux = ft_strjoin (buff_r[fd], read_f);
		free (read_f);
		free (buff_r[fd]);
	}
	return (aux);
}


