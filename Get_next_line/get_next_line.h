/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:34:19 by rofontai          #+#    #+#             */
/*   Updated: 2022/12/08 11:11:53 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>		/*à Supprimer*/
# include <fcntl.h>		/*à Supprimer*/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
size_t	lenstr(char *s);
char	*read_copy(int fd, char *str);
char	*join(char *s1, char *s2);
int		search_new_line(char *str, char c);
char	*extract_line(char *str);
char	*clear_temp(char *str);

#endif
