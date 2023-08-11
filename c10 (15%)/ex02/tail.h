/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 23:18:38 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/09 23:41:28 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAIL_H
# define TAIL_H

# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <libgen.h>
# include <errno.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_atoi(char *src);
void	ft_error(char *bname, char *name, char *error);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif