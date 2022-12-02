/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:34:19 by rofontai          #+#    #+#             */
/*   Updated: 2022/12/02 14:47:51 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>		/*à Supprimer*/
# include <fcntl.h>		/*à Supprimer*/

# ifndef BUFFER_SIZE
# 	define BUFFER_SIZE 10
# endif

void	*get_next_line(int fd);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putendl(char *s);
int		search_new_line(char *str, char c);
char 	*copy_in_stat(char *str, int len);
int		lenstr(char *str);
char 	*join(char *s1, char *s2);
void	zero(void *s, size_t n);

#endif