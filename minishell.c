/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:15:49 by hmokhtar          #+#    #+#             */
/*   Updated: 2022/06/29 15:15:40 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int main(int ac, char **av, char **env)
{
	char *tmp1;
	char **tmp2;
	int i = 0;

	tmp1 = getenv("PATH=");
	tmp2 = ft_split(tmp1, ':');
	while (tmp2[i])
		printf("%s\n", tmp2[i++]);
	write(1, "~$ ", 3);
	while (get_next_line(0) > 0)
		write(1, "~$ ", 3);
}
