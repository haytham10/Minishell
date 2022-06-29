/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <hmokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:45:43 by hmokhtar          #+#    #+#             */
/*   Updated: 2022/06/29 14:50:08 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char *get_next_line(int fd)
{
    char tmp[800000];
    char buff[0];
    char *line;
    int i = 0;
    
    if (fd < 0)
        return (NULL);
    tmp[i] = '\0';
    while (read(fd, buff, 1) == 1)
    {
        tmp[i] = buff[0];
        tmp[i + 1] = '\0';
        if (tmp[i] == '\n')
        {
            i++;
            break ;
        }
        i++;
    }
    if (tmp[0] == '\0')
        return (NULL);
    line = malloc (i + 1);
    i = 0;
    while (tmp[i])
    {
        line[i] = tmp[i];
        i++;
    }
    line[i] = '\0';
    return (line);
}
