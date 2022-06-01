/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akihito <akihito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:12:32 by akihito           #+#    #+#             */
/*   Updated: 2021/11/27 14:12:33 by akihito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>

int		put_memo(char *str, char **memo);
int		put_line(char **memo, char **line);
int		check_memo(char *memo);
int		put_eof(char **memo, char **line);
int		get_next_line(int fd, char **line);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
int		ft_free(char **tmp, char **memo);
char	*ft_strdup(const char *s1);
#endif
