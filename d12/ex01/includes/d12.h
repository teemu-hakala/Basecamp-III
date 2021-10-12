/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d12.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:08:59 by thakala           #+#    #+#             */
/*   Updated: 2021/09/02 05:42:04 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef D12_H
# define D12_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

# define BUF_LEN 30700

void		ft_putstr(char *str);
int			ft_cat(int argc, char **argv);
int			ft_handle_file(int file_descriptor);
int			ft_display_file(int argc, char **argv);

#endif
