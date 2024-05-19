/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_exec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:30:28 by samartin          #+#    #+#             */
/*   Updated: 2024/05/19 19:58:54 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static t_list *pp_create_pipes(int pipe_num)
{
	int		*content;
	t_list	*pipe_list;
	t_list	*node;
	int		i;

	i = 0;
	while (i < pipe_num)
	{
		content = malloc(sizeof(int) * 2);
		if (!content || pipe(content) == -1)
		{
			pp_lst_clean(pipe_list);
			return (NULL);
		}
		node = ft_lstnew(content);
		ft_lstadd_back(&pipe_list, node);
		i++;
	}
	return (pipe_list);
}

int	pp_pipex_hdoc_append(int argc, char **argv, char **envp)
{
	return (0);
}

int	pp_pipex_files(int argc, char **argv, char **envp)
{
	int		i;
	t_list	*pipe_lst;

	pipe_lst = pp_create_pipes(argc - 2);
	if (!pipe_lst)
	{
		perror("Memory error creating pipes");
		return (1);
	}
	i = 1;

	return (0);
}
