/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theogell <theogell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:25:35 by theogell          #+#    #+#             */
/*   Updated: 2019/02/18 16:53:01 by theogell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 4096
# include <sys/stat.h>
# include <sys/types.h>
# include <limits.h>
# include <fcntl.h>
# include "libft/libft.h"

int			get_next_line(const int fd, char **line);

#endif
