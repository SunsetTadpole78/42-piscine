/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:26:05 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/28 22:37:16 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H 
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_node
{
	int				index;
	int				value;
	int				col;
	int				line;
	struct s_node	*next;
	struct s_node	*previous;
}			t_node;

//ft_putchar
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	print_table(t_node *head, int n);
int		mini_atoi(char *str);

//main
void	free_nodes(t_node *head);

//nodes
t_node	*next_node(t_node *head, int index, int n);
t_node	*init_nodes(int n);

//possibilities
int		*check_column(t_node *cur, int *result);
int		*check_line(t_node *cur, int *result);
int		*get_possibilities(t_node *cur, int n);
int		is_possible(t_node *cir, int id, int n);

//rush01
int		test_node(t_node *cur, int view[4][9], int n);
t_node	*init_table(int n);
int		rec(t_node *cur, int view[4][9], int n);

//validators
int		check_left(t_node **cur, int *left, int n);
int		check_right(t_node **cur, int *right);
int		check_up(t_node **cur, int *up, int n);
int		check_down(t_node **cur, int *down);

//view
int		individual_number(char *str, int index, int n);
void	create_views(char *str, int result[4][9], int n);
int		check_errors(char *str, int n);

#endif
