/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:28:52 by samartin          #+#    #+#             */
/*   Updated: 2024/05/19 19:59:24 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H
# include "libft/libft.h"

int		pp_check_args (int argc, char **argv);
int		pp_pipex_hdoc_append(int argc, char **argv, char **envp);
int		pp_pipex_files(int argc, char **argv, char **envp);
void	pp_lst_clean(t_list *lst);

#endif