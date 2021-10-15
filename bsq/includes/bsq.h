/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:33:10 by mrozhnov          #+#    #+#             */
/*   Updated: 2021/09/09 16:37:32 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define NEWLINE '\n'
# define FILENAME "42"
# define BUF_LEN 4096

typedef struct		s_square
{
	int				x;
	int				y;
	int				size;
}					t_square;

typedef struct		s_matrix
{
	int				**matrix;
	int				rows;
	int				cols;
	char			empty;
	char			obstacle;
	char			full;
	t_square		*bsq;
}					t_matrix;

typedef struct		s_coordinate
{
	int				x;
	int				y;
}					t_coordinate;

typedef struct		s_list
{
	char			*part;
	struct s_list	*next;
}					t_list;

void				ft_putchar(char character);
int					ft_strlen(char *str);
int					ft_skip_key(int *fd, int *key_len);
void				ft_print_matrix(t_matrix *matrix, int *fd);
void				ft_putstr(char *str, int channel);
int					ft_atoi_bsq(char *str);
void				ft_putnbr(int number);
int					ft_read_error(void);
void				ft_validate_map_stdin(void);
int					ft_validate_map(char *filename);
t_list				*ft_add_link(t_list *list, char *part);
void				ft_print_list(t_list *list);
void				ft_free_list(t_list *list, t_list *ptr);
void				ft_free_matrix(t_matrix *matrix, int all);
int					ft_read_error(void);
int					ft_open_error(void);
int					ft_malloc_error(void);
int					ft_map_key_error(void);
int					ft_map_line_error(void);
char				*ft_change_key_size(char *key, int key_len);
int					ft_read_map_key_logic(int *bytes_read, int *observed_bytes,
	int *key_len, char *key);
int					ft_read_map_key(int *key_len, int observed_bytes,
	char **key_str, int *fd);
int					ft_interpret_map_key(t_matrix *matrix, char *key,
	int *key_len);
int					ft_validate_map_key(int *key_len, int *fd,
	t_matrix *matrix);
int					ft_read_first_line(t_list *list, int *fd);
int					ft_arrayify_logic(t_list *list, t_coordinate *coordinate,
	t_matrix *matrix, int *row);
int					ft_arrayify_first_line(t_list *list, t_matrix *matrix,
	t_coordinate *coordinate);
char				*ft_strdup(char *str);
int					ft_interpret_rows_if(t_matrix *matrix, int *row,
	char *character, t_coordinate *coordinate);
int					ft_interpret_rows_else(t_matrix *matrix, int *row,
	char *character, t_coordinate *coordinate);
int					ft_interpret_rows_logic(t_matrix *matrix, int *row,
	char *character, t_coordinate *coordinate);
int					ft_interpret_rows_reader(int *fd, t_matrix *matrix,
	t_coordinate *coordinate);
int					ft_interpret_rows(t_matrix *matrix, int *fd,
	t_coordinate *coordinate);
int					ft_minimum(int a, int b);
t_list				*ft_start_list(t_list *start);
void				ft_initialize_square(t_square *square);
int					ft_lseek(int *fd, char *filename, int *key_len);
t_coordinate		ft_initialize_coordinate(void);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strdup(char *str);
int					ft_minimum(int a, int b);

#endif
