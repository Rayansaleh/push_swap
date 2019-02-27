/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tstmain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 18:58:03 by rsaleh            #+#    #+#             */
/*   Updated: 2019/01/23 18:58:14 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(int argc, char **argv)
{
	int fd;
	int fd2;
	char *line;
	int ret;
	int i;

	if (argc >= 2)
	{
		if (access(argv[1], F_OK) == 0)
		{
			i = 0;
			fd = open(argv[1], O_RDONLY);
			while((ret = get_next_line(fd, &line)) == 1)
			{
				i++;
				printf("MAIN:%d, line>%s\n", ret, line);
			}
			close(fd);
			i = 0;
			fd2 = open(argv[2], O_RDONLY);
			while((ret = get_next_line(fd2, &line)) == 1)
			{
				i++;
				printf("MAIN:%d, line>%s\n", ret, line);
			}
			close(fd2);
		}
	}
	return (1);
}
