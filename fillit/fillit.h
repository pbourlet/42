/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 13:36:05 by pguillie          #+#    #+#             */
/*   Updated: 2016/11/22 11:27:52 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#include <fcntl.h>

char	**ft_check(int);
int		ft_solve(char**, char*, int);
void	ft_errors(char*);
int		ft_move(char*, int, int);
int		ft_space(char*, char*, int, int);
void	ft_append(char*, char*, int);
void	ft_erase(char*, char*);
void	ft_disp(char*, int);

#endif
