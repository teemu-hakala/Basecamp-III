/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d12.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:08:59 by thakala           #+#    #+#             */
/*   Updated: 2021/09/01 16:42:52 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef D12_H
# define D12_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

# define BUF_LEN 256

int			ft_handle_file(char **argv);
void		ft_putstr(char *str);
int			ft_display_file(int argc, char **argv);

#endif
